#include<iostream>
using namespace std;

 //whether the n is divisible by both 2 and 3     //// 2 only///3 only....
int main()
{
   int n;
   cout<<"Enter the number:"<<endl;
   cin>>n;
   if(n%2==0 && n%3==0)
   {
       cout<<"The given number is divisible by both 2 and 3"<<endl;
   }
   else if(n%2==0)
   {
       cout<<"The number is divisible by 2 only"<<endl;
   }
   else if(n%3==0)
   {
       cout<<"The num is divisible by 3 only "<<endl;
   }
   else
   {
       cout<<"Divisible by none"<<endl;
   }
   return 0;
} 
    