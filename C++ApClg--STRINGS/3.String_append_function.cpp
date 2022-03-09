#include<iostream>  // String append()
#include<string>
using namespace std;
   
int main()
{
    string s1 = "Fam";
    string s2 = "ily";

    s1.append(s2);   // appending 'ily' to s1
    cout<<s1<<endl;

     
     cout<<endl;
    //other methods
    string str1 = "Space";
    string str2 = "car";
    cout<< str1+str2 <<endl;   //appending by using +



    cout<<endl;
    //another method
    string st1 = "Coim";
    string st2 = "batore";
    st1 = st1+st2;
    cout<< st1 <<endl;   //appending by using +
    

    


  return 0;
}