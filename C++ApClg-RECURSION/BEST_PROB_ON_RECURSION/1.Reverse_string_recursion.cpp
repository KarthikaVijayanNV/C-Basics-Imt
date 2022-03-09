#include<iostream>     // Reversing a string using Recursion
using namespace std;

 void reverse(string s)
 {
     if(s.length() == 0)
     {
         return ;
     }

     string RestofStr = s.substr(1);

     reverse(RestofStr);
     cout<<s[0]<<" ";

 }
    
int main()
{
    reverse("binod");
   
    return 0;
}