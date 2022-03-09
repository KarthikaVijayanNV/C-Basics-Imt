#include<iostream>  // factors of a given number including 1 and that number
using namespace std;

int main()
{
    int n;
    cout<<"Enter n:"<<endl;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        cout<<i<<" ";
    }
    return 0;
}
