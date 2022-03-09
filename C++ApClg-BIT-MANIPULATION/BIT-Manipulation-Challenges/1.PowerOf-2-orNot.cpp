#include<iostream>    //checking a a number is power of 2 or not ?
using namespace std;

 bool isPowerOf2(int n)
 {
     return  ( n &&  ! (n & n-1));   // ! means....!(0)..>> 1..means true...it is the power of 2
 }


int main()
{
  cout<<isPowerOf2(32)<<endl; // returns 1(true)  if it is power f 2...else 0

}
