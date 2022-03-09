#include<iostream> // Update bit = clearbit + setbit
using namespace std;

int updateBit(int n, int pos,int value)
{
    //Clearbit operation first
    int mask = ~(1<<pos);
    n = n & mask;
    //Setbit Operation 2nd
    return (n | (value<<pos)); // one small difference between setbit(usually 1<<pos) is...here u use (value<<pos)

}
int main()
{
   cout<<updateBit(5,1,1)<<endl; // in position 1 upadte 1 ....of 5

    return 0; // o/p 7
}

