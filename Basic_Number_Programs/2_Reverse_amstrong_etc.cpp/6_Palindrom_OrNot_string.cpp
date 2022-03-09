#include<iostream>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int n= s.size();
    bool flag = true;

    for(int i=0; i<n ; i++)
    {
        if(s[i] != s[n-1-i])
        {
            flag = false;
        }
    }

    if(flag == true)
    {
        cout<<"Palindrom"<<endl;
    }
    else
    {
        cout<<"Not Palindrom"<<endl;
    }


    return 0;
}
