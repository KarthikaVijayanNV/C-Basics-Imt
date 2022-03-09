#include<iostream>    //checking number of 1's in a binary equivalent of  a numeber
using namespace std;

int numberofOnes(int n)
{
    int count = 0;
    while(n)
    {
        n = n & (n-1);
        count ++;
    }
    return count ;
}


int main()
{
   cout<<numberofOnes(15); // binary equivalent of 15 has 4 ones in it

   return 0;   // o/p will be 4
}