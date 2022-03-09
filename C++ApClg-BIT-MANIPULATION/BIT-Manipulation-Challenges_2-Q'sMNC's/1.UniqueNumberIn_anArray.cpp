#include<iostream>  // Finding the unique one in the array whose not present twice
using namespace std;

int  uniqueOne(int arr[],int n)
{
    int Xorsum =0 ;
    for(int i=0; i<n; i++)
    {
        Xorsum = Xorsum ^ arr[i] ;
    }
    return Xorsum ;   // in the xorsum...the number not have duplicates will remain
}


int main()
{
    int arr[]= {2,4,6,3,4,6,2};    // 3 is the unique one
    cout<<uniqueOne(arr,7);    // o/p will be 3

    return 0;
}
