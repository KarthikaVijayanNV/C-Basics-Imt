#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);

   //Input
    for(auto &i : v)
    {
       cin>>i;  
    }

    //Output
    for(auto &i : v)
    {
      cout<<i<<" ";  
    }




    return 0;
}