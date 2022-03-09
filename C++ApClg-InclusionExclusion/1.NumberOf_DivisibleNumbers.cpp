#include<iostream>  // Total numebers within N..which are divisible by a &b
using namespace std;

int divisible(int n,int a,int b)
{
    int C1 = n/a;
    int C2= n/b;
    int C3 =n/(a*b);

    return C1+C2 -C3;
}
int main()
{

 int n,a,b;
 cout<<"Enter n:"<<endl;
 cin>>n;
 cout<<"Enter the divisors a and b:"<<endl;
 cin>>a>>b;

 cout<<divisible(n,a,b)<<endl;
    return 0;
}