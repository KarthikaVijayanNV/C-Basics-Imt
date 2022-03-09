#include<iostream>  // stoi() function will convert a numeric string to it's integer value   
#include<string>
using namespace std;
   
int main()
{ 
    string s1 = "786";
    int n= stoi(s1);
    cout<<n<<endl;     // 786

    cout<<n+1<<endl;  // experimenting ..o/p will be 787
 
    
    return 0;

}