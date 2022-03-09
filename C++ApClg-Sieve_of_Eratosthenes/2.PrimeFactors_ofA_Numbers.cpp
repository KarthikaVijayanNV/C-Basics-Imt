#include<iostream>  // Printing the prime factors of a number
using namespace std;


 void Primefactors(int n)
 { 
     // for intializing smallest prime factor (spf) array
    int spf[100] ={0};
    for(int i=2; i<=n; i++)
    {
        spf[i] = i;    // putting all the element in the index i as i
    }


     // traversing through 'n' array ..and making the multiple of i....an i
    for(int i=2; i<=n; i++)
    {
        if(spf[i] ==i)
        {
            for(int j= i*i; j<=n; j=j+i)
            {
               if(spf[j] == j)
               {
                   spf[j] = i;
               }
            }
        }
    }


    while(n!=1)   // dividing each time n..after it finds it's spf
    {
        cout<<spf[n]<<" ";
        n = n /spf[n];
    }


 }
int main()
{
    int n;
    cout<<"Enter n:"<<endl;
    cin>>n;

    Primefactors(n);
}
