#include<iostream>   // printing N increasing order
using namespace std;

 void increase(int n)
 {
    if(n == 1)
     {
         cout<<"1"<<" ";
         return; 
     }

     increase(n-1);
     cout<<n<<" ";
     
 }




int main()
{

    int n;
    cout<<"Enter n:"<<endl;
    cin>>n;
    increase(n);
   
    return 0;
}