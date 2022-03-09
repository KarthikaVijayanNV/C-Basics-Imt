#include<iostream>  // DMA in string ...input a sentence
#include<string>
using namespace std;
   
int main()
{
  string str;
  cout<<"enter a sentence: "<<endl;
  getline(cin,str);
  cout<<str;

  return 0;
}