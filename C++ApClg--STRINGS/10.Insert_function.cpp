#include<iostream>  // inserting a particular string at a particular index
#include<string>              
using namespace std;
   
int main()
{ 
    string s1 = "Carcar";

    s1.insert(3,"bon"); //string "bon"   will get added in the 3rd index
    cout<<s1<<endl;  // o/p will be carboncar 
    return 0;

}
    