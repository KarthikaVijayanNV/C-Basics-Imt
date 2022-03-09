#include<iostream>   // counting the inversions using mergesort method;
using namespace std;

long long Merge(int arr[], int l , int mid ,int r)
{
    long long inversion =0;
    int n1 = mid-l+1;
    int n2 = r-mid;

    int a[n1];
    int b[n2];   // making 2 temporary arrays
 
    for(int i=0; i<n1; i++)
    {
        a[i] = arr[l+i];
    }
    for(int i=0; i<n2; i++)
    {
        b[i] = arr[mid+1+i];      // both array value also splitted
    }

    //merge operation -> sorting & placing

    int i=0;  // iterator for first array
    int j=0;  // iterator for second array   
    int k= l;  // iterator for main array after merging  l=0

    while(i<n1 && j<n2)
    {
        if(a[i] < b[j])
        {
            arr[k] = a[i];
            k++;
            i++;
        }
        else
        {
            arr[k] = b[j];
            inversion += n1-i;
            k++;
            j++;

        }
    }


    while(i<n1)  // if j end and i only remains....then all the value in the a[i] should be arr[k];
    {
        arr[k] = a[i];
        k++;
        i++;
    }

    
    while(j<n2)  // if i end and j only remains....then all the value in the a[i] should be arr[k];
    {
        arr[k] = b[j];
        k++;
        j++;
    }


    return inversion;
}


long long MergeSort(int arr[], int l, int r)
{
    long long inversion =0;
    if(l<r)
    {
        int mid = (l+r) /2;
        inversion += MergeSort(arr, l, mid);
        inversion += MergeSort(arr,mid+1 ,r);  // divided into smaller blocks till it become single block

        inversion += Merge(arr, l , mid ,r);

    }
    return inversion;
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
    
    cout<<MergeSort(arr,0,n-1);


    return 0;
}