#include<iostream>  // GCD of 2 numbers using Euclid algorithm
using namespace std;

int GCD(int a,int b)
{
    while(b!=0)
    {
        int rem =a%b;
        a=b;
        b=rem;
    }

    return a;
}
int main()
{
      int a,b;
      cout<<"Enter 2 numbers: "<<endl;
      cin>>a>>b;

      cout<<GCD(a,b);
    return 0;
}