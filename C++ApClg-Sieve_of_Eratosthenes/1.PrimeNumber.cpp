#include<iostream>  // Printing the prime numbers within a given limit
using namespace std;

 void primeSieve(int n)
 {
     int prime[100] = {0};  // each element is zero

     for(int i=2; i<=n; i++)
     {
        if(prime[i] == 0)   // checking unmarked or not?
        {
            for(int j=i*i; j<=n; j=j+i)
            {
               prime[j] =1;  //  marked
            }
        }
     }

     for(int i=2; i<=n; i++)
     {
         if(prime[i]==0)// not marked ..means these are prime numbers
         {
             cout<<i<<" ";  // not the elelemt inside the index ....we are outputting the index only
         }
     }
    
 }



int main()
{
    int n;
    cout<<"Enter n:"<<endl;
    cin>>n;

    primeSieve(n);

    return 0;


}
