#include<iostream>  // DMA in string ...output also
#include<string>
using namespace std;
   
int main()
{ 
    string str;
    // i/p
    cout<<"Enter your string: "<<endl;
    cin>>str;
    //o/p
    cout<<str<<endl;



    //Different types of declaration of string
    string str1(5,'k');  // 5 times k will get printed
    cout<<str1<<endl;


    //Direct declaration
    string str2 ="KarthikaVijayan";   //without space
    cout<<str2<<endl;

} 