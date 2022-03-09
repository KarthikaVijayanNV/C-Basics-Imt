#include<iostream>     //      nCr=n! / ((n-r)! * r!)
using namespace std;

int factorial(int n)
{
    int fact=1;
    for(int i=2;i<=n;i++)  // loop starts from 2 only..otherwise why would be multiplying 1*1
    {                                           // it will always be one.. so starting from 2
        fact=fact*i;     // fact*=i
    }
    return fact;
}


int main()
{
   int n,r;
   cout<<"Enter n and r:"<<endl;
   cin>>n>>r;

   int ans=factorial(n)/(factorial(n-r)*factorial(r));   // equation for nCr
   cout<<ans;
   return 0;
}