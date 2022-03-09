#include<iostream> // first and last occurance(index position)of an element in array
using namespace std;

int FirstOccu(int arr[],int n ,int i,int key)   //To find the 1st occurance of an element in an array
{
    // Base condition
    if( i==n)
    {
        return -1;
    }
    
    // code
    if(arr[i] == key)
    {
        return i;
    }
    return FirstOccu(arr,n,i+1,key);
}

int LastOccu(int arr[],int n,int i,int key)
{
    // base condition
    if( i==n)
    {
        return -1;
    }

    // code
    int Restarray = LastOccu(arr,n,i+1,key);
    if (Restarray !=-1)
    {
       return Restarray;
    }

    if(arr[i] == key)
    {
        return i;
    }
    return -1;
}


    
int main()
{
   int arr[] ={4,2,1,2,5,2};
   cout<<FirstOccu(arr,7,0,2)<<" "; // here my key is 2 
   cout<<LastOccu(arr,7,0,2);  // return the 1st and last occurance of 2
    return 0;   // o/p is     1 , 5
}  