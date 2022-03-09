#include<iostream>   // checking array is sorted or not -ascending order
using namespace std;

bool Sorted(int arr[],int n)
 {
    if(n==1)
    {
        return true;
    }

    int RestArray = Sorted (arr+1, n-1);
    return (arr[0]<arr[1] && RestArray);
  }
   

    
int main()
{

    int arr[] ={1,2,3,4,5};  // elements are soretd in th ascending order
    cout<<Sorted(arr,5);     // o/p should be 1..true
   
    return 0;
}