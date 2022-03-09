#include<iostream>
using namespace std;
   
int main()
{ 
    int a,b;
    cout<<"Enter a and b"<<endl;
    cin>>a>>b;
     int c= a>b? a-b:b-a ;
     cout<<c<<endl;
    return 0;
}