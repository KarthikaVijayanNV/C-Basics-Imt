#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


void avoidDup (vector<int> a ,vector<vector<int>> &ans , int index)
{
    if(index == a.size())
    {
        ans.push_back(a);
        return ;
    }

    for(int i =index;  i<a.size();  i++)
    {
        if(i != index and a[i] == a[index])  // duplicates
        {
            continue;   // skip the current loop;
        }

        swap(a[i] ,a[index]);
        avoidDup(a,ans,index+1);
    }
}




vector<vector<int>> permutations(vector<int> a)   // sorting
 {
    sort(a.begin() ,a.end());
    vector<vector<int>> ans ;
    avoidDup (a,ans,0);
    return ans;
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



    vector<vector<int>> store  = permutations(a); // here this vector store the permutation
    for(auto v :store)
    {
        for(auto i :v)
        {
            cout<<i<<" ";
        }  
        cout<<endl;     
    }


    return 0;
}