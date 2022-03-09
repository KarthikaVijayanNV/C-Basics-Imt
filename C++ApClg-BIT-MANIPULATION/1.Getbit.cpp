#include<iostream>    //checking a particular bit is 0 or 1
using namespace std;

int  getBit(int n, int pos)
{
    return ((n & (1 << pos))!=0); // this is a condition ....
}
   
int main()
{
  cout<<getBit(5,2); // checks 5 (0101)...2 nd position is 0 or 1;

  return 0;  // o/p is 1
}