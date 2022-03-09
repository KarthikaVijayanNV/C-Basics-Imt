 // 1              logic(nCr)    // 0c0                         logic(iCj)
 // 1 1                          // 1c0  1c1
 // 1 2 1                        // 2c0  2c1 2c2
 // 1 3 3 1                      // 3c0  3c1 3c2  3c3
 // 1 4 6 4 1                    // 4c0  4c1 4c2  4c3  4c4

 #include<iostream>     
using namespace std;

int factorial(int n)
{
    int fact=1;
    for(int i=2;i<=n;i++)  // loop starts from 2 only..otherwise why would be multiplying 1*1
    {                                           // it will always be one.. so starting from 2
        fact=fact*i;
    }
    return fact;
}


int main()
{
   int n;
   cout<<"Enter n:"<<endl;
   cin>>n;
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<=i;j++)
       {
           int ans=factorial(i)/ (factorial(j)*factorial(i-j));
           cout<<ans<<" ";
       }
    
    cout<<endl;
   }

   return 0;

}