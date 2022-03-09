#include<iostream>  //all digits of  a positive decimal number from right to left eg:145
using namespace std; //                                                    5,4,1

int main()
{
    int n;
    cout<<"Enter n:"<<endl;
    cin>>n;

    while(n>0)
    {
        int eachdigit= n%10;
        cout<<eachdigit<<endl;
        n= n/10;
    }
    return 0;
}
