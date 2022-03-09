#include<iostream>
using namespace std;
int main() //prime number between a & b (2 particular number)
{
  int a,b;
  int i;
  cout<<"Enter a and b"<<endl;
  cin>>a>>b;
  for(int num=a;num<b;num++)
  {
      for(i=2;i<num;i++)
      {
          if(num%i==0)
          {
              break;
          }
      }
      if(i==num)
      {
          cout<<num<<endl;
      }
  }
  return 0;
}