#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> ans;    // ans vector is declared in as public ..so accesable from anywhere in the program


void permutation(vector<int> &a , int index)
{
    //base condition
    if(index == a.size())
    {
        ans.push_back(a);
        return;
    }

    for(int i =index; i<a.size(); i++)
    {
        swap(a[i] ,a[index]);
        permutation (a,index+1);
        swap(a[i], a[index]);
    }
    return;


}



int main()
{

    int n;
    cin>>n;
    vector<int> a(n);
    for(auto &i : a)
    {
        cin>>i;
    }

 

   permutation(a,0);

   
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