#include<iostream>
using namespace std;
   
int main()
{ 
    int a;
    int *b=&a; // the pointer b >>>will points at the address of a
    cout<<b<<endl;
    return 0;
} 