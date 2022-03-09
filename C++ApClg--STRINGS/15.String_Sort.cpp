#include<iostream>  // sorting string in the ascending order...lexicographically sorting..(abc....xyz)
#include<algorithm> // for using sorting function
#include<string>
using namespace std;
   
int main()
{ 
    string s1 = "xcshdaidiaadccij";
   
    sort(s1.begin(), s1.end()); // begin will get 1st iterator of string///end will get last character after theend of the string
    cout<<s1<<endl;  // string will be in the sorted order
    

    
    return 0;

}