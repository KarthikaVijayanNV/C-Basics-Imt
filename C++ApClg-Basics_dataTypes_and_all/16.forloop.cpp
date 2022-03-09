#include<iostream>
using namespace std;
int main() //sum of numbers till particular limit //sum of integers
{
   int n,sum=0;
   cout<<"Enter the limit :";
   cin>>n;
   for(int i=0;i<=n;i++)
   {
       sum=sum+i;
   }
   cout<<"sum is: "<<sum<<endl;
   return 0;
}