#include<iostream>
using namespace  std;
int main()
{
    char button;
    cout<<"Enter the character: "<<endl;
    cin>>button;
    if(button=='a')
    {
        cout<<"I Speak Malayalam"<<endl;
    }
    else if(button=='b')
    {
        cout<<"I speak Tamil"<<endl;
    }
    else if(button=='c')
    {
        cout<<"I speak Telugu"<<endl;
    }
    else if(button=='d')
    {
        cout<<"I speak Kannada"<<endl;
    }
    else if(button=='e')
    {
        cout<<"I speak English"<<endl;
    }
    else 
    {
        cout<<" Sorry I'm still learning more"<<endl;
    }
    
    return 0;
}