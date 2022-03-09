#include<iostream>   // all possible words from phone keypad digits
using namespace std;

string keypadArr[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

void keypad(string s , string ans)
{
    if(s.length() == 0)
    {
       cout<<ans<<endl;
       return;
    }

    char ch = s[0];
    string code = keypadArr[ch - '0'];  // to get the integer index of keypadarray
    string RestofStr = s.substr (1);

    for(int i=0; i<code.length(); i++)
    {
         keypad(RestofStr, ans+code[i]);
    }
}



int main()
{
   keypad ("234", "");
    return 0;
}
   