#include<iostream>    // Printing all the substrings along with it's ascii value(subsequence of a string)
using namespace std;

 void subStringsAscii(string s, string ans)
 {

     if(s.length () == 0)
     {
         cout<<ans<<endl;
         return ;
     }


     char ch = s[0];
     int code = ch;    // give u the ascii of ch in interger form.
     string Restofstr = s.substr(1);

         
    subStringsAscii(Restofstr , ans);
    subStringsAscii(Restofstr , ans+ch);
    subStringsAscii(Restofstr , ans+ to_string(code)); // code is in interger form...change it into string
 }
   

    
int main()
{

    subStringsAscii("AB" , "");
   
    return 0;
}