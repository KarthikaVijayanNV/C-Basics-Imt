#include<iostream>    // Printing all the substrings(subsequence of a string)
using namespace std;

 void subStrings(string s, string ans)
 {

     if(s.length () == 0)
     {
         cout<<ans<<endl;
         return ;
     }


     char ch = s[0];
     string Restofstr = s.substr(1);

         
    subStrings(Restofstr , ans);
    subStrings(Restofstr , ans+ch);
 }
   

    
int main()
{

    subStrings("ABC" , "");
   
    return 0;
}