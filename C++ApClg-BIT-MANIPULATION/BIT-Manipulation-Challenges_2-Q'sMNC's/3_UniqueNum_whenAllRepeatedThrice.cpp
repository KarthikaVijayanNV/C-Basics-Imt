#include<iostream>  // Finding the unique num in an array where rest all elements are repeated thrice
using namespace std;

// setting the bit 1 in the result
int Setbit(int n,int pos)
{
    return ( n | (1<<pos));
}

// getting the numbers from the array whose having setbit at particluar positions(0th,1st,2nd)
bool Getbit(int n,int pos)
{
    return ((n &( 1<<pos)) !=0);
}



// getting the unique one in the array
int UniqueOne(int arr[],int n)
{
    int result =0;

    for(int i=0; i<64; i++)
    {
        int sum= 0;
        for(int j=0; j<n; j++)
        {
            if(Getbit(arr[j],i))
            {
                sum++;
            }
        }
        if(sum %3 != 0)
        {
            result = Setbit(result,i);
        }
    }

    return result;
}

int main()
{
    int arr[]= {1,3,2,3,4,2,1,1,3,2};  // unique one is 4
    cout<<UniqueOne(arr,10);   // o/p should be 4

    return 0;
}