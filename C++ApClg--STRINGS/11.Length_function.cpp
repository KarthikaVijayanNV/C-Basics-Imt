#include<iostream>  // length() returns the size of the string
#include<string>           // same as that of size() function but this will help you to  treaverse through each character      
using namespace std;
   
int main()
{ 
    string s1 = "Carboncar";
     cout<<s1.length()<<endl;      // o/p is 9
 
    // printing each character of string
    for(int i=0; i<s1.length(); i++)
     {
        cout<<s1[i]<<endl;
     }
 
    return 0;

}
    