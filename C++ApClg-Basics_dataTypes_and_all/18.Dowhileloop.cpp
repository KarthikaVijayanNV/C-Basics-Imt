#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number: "<<endl;
    cin>>n; //whatever number you are giving it will print the number just demo
    do 
    {
        cout<<n<<endl;
        cin>>n;
    }while(n>0);
    return 0;
}
