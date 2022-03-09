#include<iostream>
using namespace std;
   
int main()
{ 
    int i=0;
    // 0     0     1    1
    i=i++ - --i + ++i - i--;
    //(0)-> (1)-> (0)-> (1)->(1)
    cout<<i<<endl;  //o/p is 0
    return 0;
}