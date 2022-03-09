#include<iostream>  // form a greatest number using a numeric string
#include<string>
#include<algorithm>  // sort()
using namespace std;
int main()
{
    string s1 ="7891234";  // greatest possible num be...9874321 ( sort the numeric string in decreasing order)

   sort(s1.begin(), s1.end() , greater<int>() );  // greater<int>() is used for sorting in decreasing order 
   cout<<s1 <<endl;                            // greater<char>() can also be used...
   return 0;


}