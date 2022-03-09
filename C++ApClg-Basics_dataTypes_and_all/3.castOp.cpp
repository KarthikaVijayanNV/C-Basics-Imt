#include<iostream> // cast operator will convert one datatype to another
using namespace std;
   
int main() //cast operator ie, a is character first ...then converted into int value
{   char ch='a';
    cout<<int(ch)<<endl; //equavalent ASCII value of a...here it is 97
    return 0;
}