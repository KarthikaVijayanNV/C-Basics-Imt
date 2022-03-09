#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
   
   bool flag =1;
    for(int i=2; i<n; i++)
    {
        if(n%i ==0)
        {
            flag =0;
            break;
        }
    }

    if(flag == 1)
    {
        cout<<"Prime"<<endl;
    }
    else
    {
        cout<<"Non prime"<<endl;
    }
}