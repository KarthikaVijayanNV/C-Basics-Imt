#include<iostream>  // coverting string to lowercase and uppercase by using transform()
#include<string>
#include<algorithm>  // for using transform() 
using namespace std;
int main()
{
    string s1= "xaweoyiwuej";  // a random string
     
     //to uppercase
    transform(s1.begin(), s1.end(), s1.begin(), :: toupper);
    cout<<s1<<endl;

    //to lowercase
    transform(s1.begin(), s1.end(), s1.begin(), :: tolower);
    cout<<s1<<endl;


     return 0;
}
    