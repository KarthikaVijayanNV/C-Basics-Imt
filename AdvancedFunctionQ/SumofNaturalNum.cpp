#include<iostream>     // sum of "n"  natural numbers using function
using namespace std;

int sum(int n)
{  
    int total=0;
    for(int i=1;i<=n;i++)
    total=total+i;
    return total;

}

int main()
{
    int n;
    cout<<"Enter n:"<<endl;
    cin>>n;

    cout<<sum(n)<<endl;
}
