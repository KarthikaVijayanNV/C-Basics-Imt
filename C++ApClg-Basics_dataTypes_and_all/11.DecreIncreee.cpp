#include<iostream>
using namespace std;
   
int main()
{ 
    int i=1,j=2,k=3;
    int m;
      // 1   2    3 ans=-4
    m=i-- - j-- - k--;
     //0     1     2
    cout<<i<<" "<<j<<" "<<k<<"   "<<m<<endl;
    return 0;

}