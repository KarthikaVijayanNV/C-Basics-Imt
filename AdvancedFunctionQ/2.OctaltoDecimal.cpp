#include <iostream>    // eg: (157) = (111)       and   (1005)= (517)  just run this test cases
using namespace std;   //         8       10                 8      10

int OctaltoDecimal(int n)
{
    int x=1;                // in first 2^0= 1
    int sum=0;
    while(n>0)
    {
        int lastdigit=n%10;     // to get the last digit
        sum=sum+ lastdigit*x;
        x=x*8;                 // 8(2^1) ,16(8^2) ,512(^3)......goes on....
        n=n/10;                // to reduce the number ...logic u know already
    }
    return sum;
}


int main()
{
	int n;
	cout<<"Enter n";
	cin>>n;
	cout<<OctaltoDecimal(n); 
	
return 0;
}