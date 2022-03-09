#include<iostream>  //SWapping using pointers   CALL BY REFERENCES
using namespace std;


 
 void swap( int *a,int *b)  // receives pointer ...and dereferencing
{
    int temp =*a;   
    *a=*b;
    *b=temp;
}
int main()
{
    int a =10;
    int b =20;
    
    swap(&a,&b);  // sending address to function

    cout<<a<<" "<<b<<" ";  // a= 20     b=10

}