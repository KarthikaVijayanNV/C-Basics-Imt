#include<iostream>   // finding N raised to power of P      n^p
using namespace std;

int Power(int n,int p)
{
    if (p == 0)
    {
        return 1;   // anynumber power 0 gonna be 1
    }
    
    int  PrevPow = Power(n,p-1);
    return   n*PrevPow ;
}
    
int main()
{
   int n,p;
   cout<<"Enter the number and power"<<endl;
   cin>>n>>p;


   cout<<Power(n,p);
    return 0;
}