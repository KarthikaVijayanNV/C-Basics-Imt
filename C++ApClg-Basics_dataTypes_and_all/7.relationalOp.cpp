#include<iostream>
using namespace std;
   // telling whether n is > or < or == 10???
int main()
{ 
    int n;
    cout<<"Enter any number"<<endl;
    cin>>n;
    if(n>10)
    {
        cout<<"The number is more than 10"<<endl;
    }
    else if(n<10)
    {
        cout<<"The number is smaller than 10"<<endl;
    }
    else
    {
        cout<<"The given number is equal to 10"<<endl;
    }
    return 0;
}