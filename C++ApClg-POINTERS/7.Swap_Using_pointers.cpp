#include<iostream>  //SWapping using pointers
using namespace std;  


 
 void swap( int *a,int *b)  // receives pointer 
{
    int temp =*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int a =10;
    int b =20;
    int *aptr =&a;
    int *bptr =&b;
    
    swap(aptr,bptr);  // sending pointer to function

    cout<<a<<" "<<b<<" ";  // a= 20     b=10

}