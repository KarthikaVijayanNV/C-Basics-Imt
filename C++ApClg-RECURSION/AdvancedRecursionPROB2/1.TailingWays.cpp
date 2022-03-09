#include<iostream>   // finding the no:of ways to tail the board using tails  
using namespace std;

int TailingWays(int n)
{
    if(n==1)
    {
        return 1;
    }
    if(n==0)
    {
        return 0;
    }


    return TailingWays(n-1) +TailingWays (n-2) ;
}

    
int main()
{
   cout<<TailingWays(4); // tailing ways when the board size is 2*4 ...
    return 0;          // o/p should be 3
}