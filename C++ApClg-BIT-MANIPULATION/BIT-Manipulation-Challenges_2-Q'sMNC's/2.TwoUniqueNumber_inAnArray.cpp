#include<iostream>  // Finding the  2 unique numbers in an array
using namespace std;

// Another function which checks through the array elements whos having the setbit at that particular position or not?
int SetBitcheck(int n, int pos)
{
    return  (( n & (1<<pos)) !=0); 
}



void Unique2(int arr[],int n)
{    
    // for finding Xorsum (which will be xor of 2 unique elements)
    int Xorsum = 0;
    for(int i=0; i<n; i++)
    {
        Xorsum = Xorsum ^ arr[i];
    }


   
   
    // copy Xorsum ?? for future use
    int tempXor = Xorsum;
    // for finding the position of setbit(1)
    int pos =0;
    int Setbit= 0;

    while (Setbit != 1)
    {
        Setbit = Xorsum & 1;
        pos++;
        Xorsum = Xorsum >> 1;
    }   // after this loop..we will be getting the position


   
   
   
   
   //after finding position going back to array to find elements whos having setbit at the position we found
    int newXor = 0;
    for(int i=0; i<n; i++)
    {
        if(SetBitcheck(arr[i],pos-1))
        {
          newXor = newXor ^ arr[i];
        }
    }

    cout<<newXor<<endl;
    cout<<(tempXor^newXor)<<endl;
    

}



int main()
{
    int arr[] = {1,2,3,4,6,7,4,3,2,1};  // o/p will be 6,7   unique numbers
   Unique2(arr,10);

    return 0;
}