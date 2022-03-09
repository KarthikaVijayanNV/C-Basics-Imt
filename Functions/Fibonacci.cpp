#include<iostream> //Fibonacci series using Function
using namespace std;

void fibonacci(int num)  // void which means this function is not returning anything 
{                                   // it's  simply prints the output
    int term1=0;
    int term2=1;
    int nextTerm;

    for(int i=1;i<=num;i++)
    {
        cout<<term1<<endl;
        nextTerm=term1+term2;

         term1=term2;
         term2=nextTerm;
    }

}

int main()
{
    int n;
    cout<<"Enter n:"<<endl;
    cin>>n;
    fibonacci(n);

    return 0;

}