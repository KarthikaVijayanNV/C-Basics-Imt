#include<iostream>
using namespace std;


int DecimaltoOctal(int n)
{
    int ans=0;
    int x=1;
    while(x<=n)
    {
        x=x*8;
    }
    x=x/8;    // out of the loop ...means this line executes when the upper loop gets over

    while(x>0)
    {
        int lastdigit= n/x;
        n= n - lastdigit*x;
        x= x/8;
        ans = ans *10 +lastdigit;

    }
    return ans;
}
   
int main()
{ 
    int n;
    cout<<"Enter n:"<<endl;
    cin>>n;
    cout<<DecimaltoOctal(n);

    return 0;
}