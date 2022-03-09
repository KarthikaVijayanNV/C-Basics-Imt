#include<iostream>  //pointer to pointer
using namespace std;
int main()
{
    int a = 10;
    int*p =&a;
    cout<<*p<<endl;   // 10

    int **q = &p;     // double dereference
    cout<<*q<<endl;    // value at p ...let's say 4000 (means the address of a)
    cout<<**q<<endl;  //10             // value at p>>>4000 ...now again *p will give u 10 

  return 0;
}
