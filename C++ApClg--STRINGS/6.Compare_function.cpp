#include<iostream>  // comparing two strings using compare()
#include<string>
using namespace std;
   
int main()
{ 
    //different string 
    string s1 ="abc";
    string s2 = "xyz";
    cout<<s2.compare(s1)<<endl; // here xyz is compared with abc   ....o/p =1 (xyz>abc)
    
   cout<<endl;


    //different string- just for demo
    string str1="xyz";
    string str2= "abc";
    cout<<str2.compare(str1)<<endl; // o/p will be -1 .....(abc<xyz)

  cout<<endl;  
 
    // equal string
     string st1 ="karthu";
    string st2 = "karthu";
    cout<<st2.compare(st1)<<endl;  // o/p is 0 means equal


    cout<<endl;

    //Another method for finding equal string using 'ifclause'
    string sr1 ="karthu";
    string sr2 = "karthu";
    if(sr2.compare(sr1) == 0)
    {
        cout<<"strings are equal: "<<endl;
    }
    else
    {
        cout<<"Strings are not equal: "<<endl;
    }
    
    return 0;
}