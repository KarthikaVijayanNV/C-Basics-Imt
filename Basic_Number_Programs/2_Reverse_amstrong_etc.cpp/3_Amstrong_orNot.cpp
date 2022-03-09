#include<iostream> //Armstrong Number
#include<math.h>   //153,370,371,407 are armstrong numbers
using namespace std; // the sum of cube of each digit will be that num eg: 153 (1^3+5^3+3^3=153)
   
int main()
{ 
    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;

    int originaln=n;
    int sum=0;
 

    while(n>0)
    {
        int lastdigit=n%10;
        sum+= pow(lastdigit,3); //Note 153 won't work here just because of the return type of pow
        n=n/10;  //407
    }

    
    if(sum==originaln)
    {
        cout<<"Armstrong"<<endl;
    }
    else
    {
        cout<<"Not Armstrong";
    }
    return 0;
    
} 