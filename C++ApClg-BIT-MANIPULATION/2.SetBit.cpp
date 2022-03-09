#include<iostream>  // set '1'   in particular position given
using namespace std;

 int setBit(int n,int pos)
 {
     return (n | (1 <<pos));
 }

int main()
{
    cout<<setBit(5,1); // set '1' in 1st position of 5....(5 will change to another number)

    return 0;  // o/p = 7
}