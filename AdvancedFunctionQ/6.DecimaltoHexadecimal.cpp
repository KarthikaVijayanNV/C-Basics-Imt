#include<iostream>
using namespace std;


string DecimaltoHexadecimal(int n)
{
    string ans="";
    int x=1;
    while(x<=n)
    {
        x=x*16;
    }
    x=x/16;

    while(x>0)
    {
        int lastdigit= n/x;
        n= n - lastdigit*x;
        x= x/16;
        
        if(lastdigit<= 9)
        {
            ans= ans+ to_string(lastdigit);  // to_string function will convert number into string
        }
        else 
        {
            char c = 'A' + lastdigit -10; // declaring a temporary variable 'c' for storing the alphabet
            ans.push_back(c);         // pushing back that 'c' to "ans"
        }

    }
    return ans;
}
   
int main()
{ 
    int n;
    cout<<"Enter n:"<<endl;
    cin>>n;

    cout<<DecimaltoHexadecimal(n);
    return 0;
} 