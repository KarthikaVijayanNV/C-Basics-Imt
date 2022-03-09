#include<iostream>  // function varibable value changing using function pointer  Demo !!!!
using namespace std;


 void increament(int *a)
{
    
    (*a)++;     // 'a' value changes to 3
}

int main()
{
    int a=2;
    increament(&a);   
    cout<<a<<endl; // o/p should be 3
    
    return 0;
}
