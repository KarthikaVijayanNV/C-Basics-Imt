#include<iostream>  // erase() function ..to erase particular character from a string
#include<string>
using namespace std;
   
int main()
{ 
    string s1 = "Carboncar";

    s1.erase(3,3); // 3 -> strating from which index...next 3-> how many character should delete
    cout<<s1<<endl;  // o/p will be  "carcar"

    return 0;

}
    