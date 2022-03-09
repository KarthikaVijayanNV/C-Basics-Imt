#include <iostream> // decimal-Binary equivalent....your 12 th std program
using namespace std;
void octal (int n)
{
	if(n>1)
	octal(n/2);
	cout<<n%2;
	
}

int main()
{
	int n;
	cout<<"Enter n";
	cin>>n;
	cout<<"Binary equivalent is"<<endl;
    octal(n);
	
return 0;
}

