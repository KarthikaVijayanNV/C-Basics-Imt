#include<iostream>
using namespace std;

void fibonacci(int n)
{
    int t1 = 0;
    int t2 = 1;
    int nextT;
    for(int i=1; i<=n; i++)
    {
        cout<<t1<<" ";
        nextT = t1+t2;

        t1 =t2;
        t2 = nextT;
    }
}

int main()
{
  int n;
  cin>>n;
  fibonacci(n);


    return 0;
}