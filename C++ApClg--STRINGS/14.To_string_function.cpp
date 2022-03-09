#include<iostream>  // to_string converts a integer into string
#include<string>
using namespace std;
   
int main()
{ 
    int n =708;
    cout<<to_string(n)<<endl;   // o/p 708

    //experiment
    cout<<to_string(n) + "2"<<endl;  // 7082  concatination will add 2 at end
     
    
    return 0;

}