#include<iostream>   
using namespace std;

int Fib(int n)
{
    if( n==0 || n==1)
    {
        return n;  // if 1 then return 1..if 0 then return 0
    }

    return Fib(n-1) +Fib(n-2);   // single line enough...or u can declare 2 extra variables to store Fib(n-1) and Fib(n-2) 
}
   


    
int main()
{

    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    cout<<Fib(n);
   
    return 0;
}