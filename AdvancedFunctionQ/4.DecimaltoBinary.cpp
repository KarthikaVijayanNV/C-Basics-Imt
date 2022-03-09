#include<iostream>
using namespace std;


int DecimaltoBinary(int n)
{
    int ans=0;
    int x=1;
    while(x<=n)
    {
        x=x*2;
    }
    x=x/2;

    while(x>0)
    {
        int lastdigit= n/x;
        n= n - lastdigit*x;
        x= x/2;
        ans = ans *10 +lastdigit;

    }
    return ans;
}
   
int main()
{ 
    int n;
    cout<<"Enter n:"<<endl;
    cin>>n;

    cout<<DecimaltoBinary(n);
    return 0;
} 