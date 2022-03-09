#include<iostream>      // Fcatorial of a number recursively
using namespace std;

int Factorial(int n)
{
    if(n == 0)
    {
        return 1;
    }
    
    int PrevFact = Factorial (n-1); // recursive call
    return n*PrevFact ;              // single line is also enough.....return n*  Factorial(n-1)
}
   
    
int main()
{
    int n;
    cout<<"Enter n:"<<endl;
    cin>>n;

    cout<<Factorial(n);
   
    return 0;
}