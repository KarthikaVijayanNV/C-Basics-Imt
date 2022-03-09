#include<iostream>     // factorial by using function
using namespace std;

int factorial(int n)
{
    int fact=1;
    for(int i=2;i<=n;i++)  // loop starts from 2 only..otherwise why would be multiplying 1*1
    {                                           // it will always be one.. so starting from 2
        fact=fact*i;     // fact*=i  this line is also fine
    }
    return fact;
}


int main()
{
   int n;
   cout<<"Enter n:"<<endl;
   cin>>n;

   int ans=factorial(n);
   cout<<ans;
   return 0;
}