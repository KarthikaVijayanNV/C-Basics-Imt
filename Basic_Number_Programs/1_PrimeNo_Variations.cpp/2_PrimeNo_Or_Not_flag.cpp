#include<iostream> // Same prime or not program with another logic
#include<cmath>    // //for using sqrt function you have to add extra header file -> cmath
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter the number: ";
    cin>>n;
    bool flag=0;   //because flag value will be either 0 or 1. that's y used the datatype boolean
    for(i=2;i<=sqrt(n);i++)    // sqrt inbuilt function is used // say n is 49 >> u don't need to
    {                          //really check numbers from 2 to 48(49-1)>> intead of that check
        if(n%i==0)              // between 2 to sqrt(49)>> that is 2 to 7>> that's enough...
        {
        cout<<"Non Prime"<<endl;
        flag=1;
        break;
        }
    }
    if(flag==0)
    {
        cout<<"Prime";
    }
    
    return 0;
}