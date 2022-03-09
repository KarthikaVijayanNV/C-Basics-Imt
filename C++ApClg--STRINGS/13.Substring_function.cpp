#include<iostream>  // substr() will get u substring from which index to ??? how much long substring??  
#include<string>
using namespace std;
   
int main()
{ 
    string s1 = "Carboncar";
    string s = s1.substr(5,4) ;  // from 5th index 4 characters
    cout<<s<<endl;  // o/p "ncar"
 
    
    return 0;

}