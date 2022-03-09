#include<iostream>
using namespace std;

int main()
{
    char button;
    cout<<"Enter the button: "<<endl;
    cin>>button;

    switch (button)
    {
    case 'a':
        cout<<"Malayalam"<<endl;
        break;

    case 'b':
        cout<<"Tamil"<<endl;
        break;
    case 'c':
        cout<<"Telugu"<<endl;
        break;
    case 'd':
        cout<<"Kannada"<<endl;
        break;
    case 'e':
        cout<<"English"<<endl;
        break;
    default:
        cout<<"Sorry ! I'm learning more!"<<endl;
       break;
    }
    return 0;
}