#include<iostream>
using namespace std;

void CountSort(int arr[], int n)
{  
    //Finding the max element
    int k =arr[0];
    for(int i=0; i<n; i++)
    {
        k = max(k,arr[i]);
    }


    //creating CountArray
    int count[20] ={0};      // u can specify the size of count sort to any number
    for(int i=0; i<n; i++)
    {
        count[arr[i]]++;
    }

    //Modify the count arry;
    for(int i=1; i<=k; i++)
    {
       count[i] += count[i-1];
    }


    //Output array
    int Output[n];
    for(int i=n-1; i>=0; i--)
    {
        Output[--count[arr[i]]]   = arr[i];
    }

    //just copying the Output array to original array , for easily giving the output
    for(int i=0; i<n; i++)
    {
        arr[i]  = Output[i];
    }


}


int main()
{

    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    CountSort(arr,n);

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }


    return 0;
}