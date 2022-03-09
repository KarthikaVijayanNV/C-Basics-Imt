#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter n:"<<endl;
    cin>>n;

     int sum=0;
    while(n>0)
    {
        int eachdigit= n%10;
        sum=sum+eachdigit;
        n=n/10;
    }
    cout<<"sum of digits:"<<sum;
    return 0;
}