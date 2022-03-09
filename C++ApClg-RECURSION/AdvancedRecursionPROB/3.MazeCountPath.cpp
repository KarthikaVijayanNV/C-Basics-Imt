#include<iostream>    // all possible paths in a maze
using namespace std;

int countPathMaze(int n, int i, int j)
{
    if(i== n-1 && j== n-1)
    {
        return 1;
    }

    if(i>= n || j>= n)
    {
        return 0;
    }

      return  countPathMaze(n, i+1, j) + countPathMaze(n, i, j+1);// summing ways through i and way through j


}



int main()
{
   cout<<countPathMaze(4,0,0); // because it's a 3/3 maze and 0,0 are iterators i and j
    return 0;
}