#include<iostream>
using namespace std;
   
int main()
{ 
    char al;

    cout<<"Enter any alphabet"<<endl;
    cin>>al;

    switch (al)
    {
    case 'a' :
        cout<<"It's a vowel"<<endl;
        break;
    case 'e' :
        cout<<"It's a vowel"<<endl;
        break;
    case 'i' :
        cout<<"It's a vowel"<<endl;
        break;
    case 'o' :
        cout<<"It's a vowel"<<endl;
        break;
    case 'u' :
        cout<<"It's a vowel"<<endl;
        break;

    default:
    cout<<"This is not a vowel"<<endl;
        break;
    }

    return 0;
}