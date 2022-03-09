#include<iostream>  // just pointer incrementation at various datatypes
using namespace std;
int main()
{
    // Integerr pointers
    int a=10;
    int *aptr =&a;
    cout<<aptr<<endl;

    // pointer increament
    aptr++;               // address gets added by 4 byts because of 'int'
    cout<<aptr<<endl;


    //character pointers
    char ch = 'a';
    char *cptr = &ch;
    cout<<cptr<<endl;

    //pointer increment 
    cptr++;              // address gets added by 1 byte because of 'char'
    cout<<cptr<<endl;



  return 0;
}