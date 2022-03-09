#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
     
      v.push_back(1);
      v.push_back(2);
      v.push_back(3);

    //Priting vector     METHOD 1   - Foorloop

    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<endl;
    }

    cout<<endl;


    //Priting vector   METHOD 2    - Using iterator

    vector<int> :: iterator it;
    for(it= v.begin() ;  it!= v.end() ;   it++)
    {
        cout<<*it<<endl;
    }

    cout<<endl;


    //Printing vector  METHOD 3 -   Using "auto"  keyword

    for(auto element : v)
    {
        cout<<element<<endl;
    }

    return 0;
}