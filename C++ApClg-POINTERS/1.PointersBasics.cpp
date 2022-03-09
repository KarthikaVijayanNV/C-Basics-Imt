#include<iostream>  // Basic opertions using pointer
using namespace std;
int main()
{
    int a = 10;
    int *aptr = &a;   // declaring a pointer at the same time assingning the address also.
    
    //Basic operations
    cout<<&a<<endl;    // adrress of 'a' will be returned
    cout<<aptr<<endl;   // addres of  'a' will be returned
    cout<<*aptr<<endl;  // here it will give you the value at that address ..here it is 10
  

    
    // some other operations ..you can even change the value at 'a' that is 10, by using the pointer
 
    *aptr = 20;    // changing the value of 'a' as 20
    cout<<a<<endl;  // 'a' value will be 20 now....
  return 0;
}