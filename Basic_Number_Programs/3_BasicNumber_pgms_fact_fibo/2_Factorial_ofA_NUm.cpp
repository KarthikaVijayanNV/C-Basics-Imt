#include<iostream>
using namespace std;
int main()
{
   int n;
   cout<<"Enter n"<<endl;
   cin>>n;
   int factorial=1;
   for(int i=1;i<=n;i++)
   {
      factorial=factorial*i;
   }
   cout<<"Factorial of the given number is: "<<factorial;
   return 0;

}