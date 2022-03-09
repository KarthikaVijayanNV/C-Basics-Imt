#include<iostream>    // in a game finding how maay ways are there to reach from a specific statting
using namespace std;  // point till a specific ending point ....(dias jumps 1 to 6)

int Countpath(int start, int end)
{
    if(start == end)
    {
        return 1;
    }

    if(start >end)
    {
        return 0;
    }

    int count =0;
    for(int i=1; i<=6; i++) // dias jumps only..only by rolling dias  1 to 6
    {
        count= count + Countpath(start+i,end);
    }
    return count;
}


    
int main()
{
   cout<<Countpath(0,3);
    return 0;
}