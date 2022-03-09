#include<iostream>   // printing elements from N in decreasind order
using namespace std;

 void decrease(int n)
 {
    if(n == 0)
     {
         return;
     }

     cout<<n<<" ";
     decrease(n-1);
 }




int main()
{

    int n;
    cout<<"Enter n:"<<endl;
    cin>>n;
    decrease(n);
   
    return 0;
}