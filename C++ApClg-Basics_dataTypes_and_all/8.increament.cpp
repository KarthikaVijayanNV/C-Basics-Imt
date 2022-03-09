#include<iostream>
using namespace std;
   
int main()
{ 
    int i=1;
    // i++ post increament value added first so 1,then increamentation takes place(1+1=2)
    // ++i pre increament already the value of i is 2 now...then++i beacomes (2+1=3)
    
    // 1      3    ans will be 4  
    i=i++ + ++i;
    cout<<i<<endl;
    return 0;
}