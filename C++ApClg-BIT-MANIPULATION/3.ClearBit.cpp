#include<iostream> // clearing a bit (make it 0) from particular position
using namespace std;

int clearBit(int n ,int pos) 
{
    int mask = ~(1 << pos);  // variable storing the 1's comlement
    return (n & mask);
}

int main()
{
    cout<<clearBit(5,2); // clear the bit at position 2 of 5

   return 0;  // o/p = 1
}