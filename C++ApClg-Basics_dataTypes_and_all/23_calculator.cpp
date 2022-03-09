#include<iostream>
using namespace std;
   
int main()
{ 
    float  num1,num2; //float is used for more accurate ans
   cout<<"Enter 2 numbers: "<<endl;
   cin>>num1>>num2;
    
    char op;
    cout<<"Enter operator"<<endl;
    cin>>op;

    switch (op)
    {
    case '+' :
        cout<<num1+num2<<endl;
        break;
    case '-' :
        cout<<num1-num2<<endl;
        break;
    case '*' :
        cout<<num1*num2<<endl;
        break;
    case '/' :
        cout<<num1/num2<<endl;
        break;
    default:
    cout<<"Please enter another operator"<<endl;
        break;
    }

    return 0;
}