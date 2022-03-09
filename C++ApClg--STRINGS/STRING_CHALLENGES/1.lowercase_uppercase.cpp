#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1= "xaweoyiwuej";  // a random string

    //find the difference between the ASCII values of 'a' and 'B'
    cout<< 'a' -'A'<<endl;   // o/p 32   'a' is(97 -65) 32 ahead of 'A' 


    //lowercase to uppercase
    for(int i=0; i<s1.size(); i++)
    {
        if(s1[i] >= 'a' && s1[i] <= 'z')
        {
            s1[i] = s1[i] - 32;
        }
    }
    cout<<s1<<endl;


    //Uppercase to lowercase
    for(int i=0; i<s1.size(); i++)
    {
        if(s1[i] >= 'A' && s1[i] <= 'Z')
        {
            s1[i] = s1[i] + 32;
        }
    }
    cout<<s1<<endl;
    
    return  0;
    
}

