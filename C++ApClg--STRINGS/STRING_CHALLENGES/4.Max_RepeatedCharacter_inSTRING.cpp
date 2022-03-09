#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s ="acdkahjfaliaxfyaz";

    //Creating a frequency array
    int freqArr[26];   // 26 alphabets only
    for(int i=0; i<26; i++)
    {
        freqArr[i] = 0;   // all elements at the beginning is 0
    }


    //Traverse through string
    for(int i=0; i<s.size(); i++)
    {
      freqArr [ s[i] -'a'] ++;    //each time number get's repeated then update ++
    }


    //check the frequency array- greatest number -(character equals to that num will be most time occured)
    char ans = 'a'; //default
    int MaxFreq =0;   // maximum frequency
    for(int i=0; i<26; i++)
    {
        if(freqArr [i] > MaxFreq)
        {
            MaxFreq = freqArr[i]; // how many  times repeated ? 
            ans = i+ 'a';         // which character is repeated ?  // here ans datatype is char so the 
        }                      // value will be returned interms of character
    }


    //printing o/p
    cout<<MaxFreq<<" ";
    cout<<ans<<endl;

}