#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter the number: ";
    cin>>n;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
        cout<<"Non Prime"<<endl;
        break;
        }
    }
    if(i==n)  // just to make sure that above loop comes out when it encounterd a number which is
    {                         // divisible by the n...or after completing the entire loop.
        cout<<"prime"<<endl;   // if it came out after completing then..it is prime
    }
    return 0;
}