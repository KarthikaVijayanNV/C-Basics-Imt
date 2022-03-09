#include<iostream>   // sum of n numbers using Recursion
using namespace std;

int Sum(int n)
{
    if(n==0)
    {
        return 0;
    }

    int PrevSum = Sum(n-1);  //Recusive call to function sum
    return n+PrevSum;
}
int main()
{
    int n;
    cout<<"Enter n:"<<endl;
    cin>>n;

    cout<<Sum(n);

    return 0;
}