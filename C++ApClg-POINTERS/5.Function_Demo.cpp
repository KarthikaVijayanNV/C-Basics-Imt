#include<iostream>  // function varibable value changing or not??  Demo !!!!
using namespace std;


 void increament(int a)
{
    a++;     // 'a' value will not change....it remains as 2
}

int main()
{
    int a=2;
    increament(a);   
    cout<<a<<endl; // o/p will be 2
    
    return 0;
}
