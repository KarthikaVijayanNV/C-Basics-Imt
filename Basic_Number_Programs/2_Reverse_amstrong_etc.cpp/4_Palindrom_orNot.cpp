#include<iostream>
using namespace std;
int main()
{

   int n;
   cin>>n;
   int reverse =0;
   int orgN = n;
   while(n>0)
   {
       int eachdigit  = n%10;
       reverse = reverse*10 + eachdigit ;
       n= n/10;
   }
     if(reverse == orgN)
     {
        cout<<"Palindrom"<<endl;
     }
     else
     {
         cout<<"Not palindrom"<<endl;
     }
    
    return 0;
}