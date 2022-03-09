#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> ans;    // ans vector is declared in as public ..so accesable from anywhere in the program





int main()
{

    int n;
    cin>>n;
    vector<int> a(n);
    for(auto &i : a)
    {
        cin>>i;
    }

 

   sort(a.begin(),a.end());
   do
   {
       ans.push_back(a);
   } while (next_permutation(a.begin() ,a.end()));
   
   

   
   for(auto v : ans)
    {
        for(auto i : v)
        {
            cout<<i<<" ";

        }
        cout<<endl;
    }
  

   
    
    return 0;
}