#include<iostream>   // printing all possible permutations of a string
using namespace std;

void permunations(string s, string ans)
{
    if(s.length()== 0)
    {
        cout<<ans<<endl;
        return ;
    }

    for(int i=0; i<s.length(); i++)
    {
        char ch =s[i];
        string RestofStr = s.substr(0,i) + s.substr(i+1); // getting the characters which are placed just before and just after the fixed string
        permunations (RestofStr , ans+ch);
    }

}
    
int main()
{
    permunations("ABC" , "");
    return 0;
}