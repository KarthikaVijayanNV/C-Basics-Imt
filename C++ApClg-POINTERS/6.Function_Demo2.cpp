#include<iostream>  // function varibable value changing or not??  Demo !!!!
using namespace std;


 int increament(int a)
{
    a++;     // value modifies to 3
    return a;  // 3 is returned
}

int main()
{
    int a=2;
    cout<<increament(a);   // o/p will be 3....because function returnes value 3.

    return 0;
}
