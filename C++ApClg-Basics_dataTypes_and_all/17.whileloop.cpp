#include<iostream>
using namespace std;
int main()
{
  int n;
  cout<<"Enter the number: "<<endl;
  cin>>n; //if u give n as -ve loop terminate
    while(n>0)
    {
        cout<<n<<endl;
        cin>>n;
    } //this pgme won't printe -ve numbers just demonstration
    return 0;
}