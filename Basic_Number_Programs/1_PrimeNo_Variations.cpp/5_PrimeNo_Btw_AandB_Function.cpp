#include<iostream> // Prime numbers between a and b using function
#include<math.h>
using namespace std;

bool isPrime(int num) // datatype of this function is boolean //either return true or false(0 ,1)
{
    for(int i=2;i<=sqrt(num);i++)
    {
        if(num%i==0)
        {
          return false;
        }
    }
   return true;
}


int main()
{
    int a,b;
    cout<<"Enter a and b:"<<endl;
    cin>>a>>b;
    
    for(int i=a;i<=b;i++)
    {
        if(isPrime(i))  // if(isPrime(i)==0) both are same //if clause by default checks whether 
          {                                             // condition is correct ot not
              cout<<i<<" ";
          }
    }
return 0;
}

   