#include <iostream>
using namespace std;

int BinarytoDecimal(int n)
{
    int x=1;                // in first 2^0= 1
    int sum=0;
    while(n>0)
    {
        int lastdigit=n%10;     // to get the last digit
        sum=sum+ lastdigit*x;
        x=x*2;                 // 2(2^1) ,4(2^2) ,8(2^3)......goes on....
        n=n/10;                // to reduce the number ...logic u know already
    }
    return sum;
}


int main()
{
	int n;
	cout<<"Enter n";
	cin>>n;
	cout<<BinarytoDecimal(n); 
	
return 0;
}