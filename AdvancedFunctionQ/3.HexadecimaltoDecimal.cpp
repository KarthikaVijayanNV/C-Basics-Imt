#include<bits/stdc++.h>   
using namespace std;   

int HexadecimaltoDecimal(string n)   // argument is string
{
    int x=1;                
    int sum=0;        // these 2 lines as it is
   
    int s= n.size();    // here u are finding the size of the string

    for(int i=s-1;i>=0;i--)   // it will be treated as array i=s-1 last element of array (last index if the size is s)
    {
        if(n[i]>= '0' && n[i]<= '9')  // if string is 0 to 9 perform this operation
        {
            sum=sum+ x*(n[i]-'0');     // same logic .... -'0' is just for references
        }
        else if(n[i]>='A' && n[i]<= 'F')    // if string is A to B   perform this operation
        {
            sum=sum+ x*(n[i]-'A'+ 10);     // -'A' is also for referenecs but '10' has it' own logic
        }                               // if n[i] is A then A-A becomes zero then 0+10 is 10(A)
                                        // if n[i] is B then B-A becomes 1 then 1+10 is 11 (B)
     x=x*16;       // updating x..hexadecimal so base value 16
    }
    return sum;

}
int main()
{
	string n;           // u are treating the input as string because it is hexadecimal A to F also there
	cout<<"Enter n";
	cin>>n;
	cout<<HexadecimaltoDecimal(n); 
	
    return 0;
}