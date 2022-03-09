#include<iostream>  // checking whether the string is empty or not
#include<string>
using namespace std;
   
int main()
{ 
  string s1 = "karthu";
  cout<<s1<<endl;

  s1.clear();

  if(s1.empty())   // after clearing the string u are checking whether it's empty or not
  {
      cout<<"The string is empty "<<endl;

  }


  return 0;
}
