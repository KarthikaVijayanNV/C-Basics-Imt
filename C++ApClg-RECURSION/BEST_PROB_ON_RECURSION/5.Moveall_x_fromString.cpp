#include<iostream>   // move all x from the string to the end
using namespace std;

 string moveallX(string s)
 {
     if(s.length() == 0)
     {
         return "";
     }

     char ch = s[0];
     string ans = moveallX(s.substr(1));
     if(ch == 'x')
     {
         return ans+ch;
     }
     return (ch+ans);
 } 

    
int main()
{

  cout<<moveallX("abxxcdfxdfxx"); // o/p should be "abced"
   
    return 0;   // o/p "abcdfdfxxxxxx"
}