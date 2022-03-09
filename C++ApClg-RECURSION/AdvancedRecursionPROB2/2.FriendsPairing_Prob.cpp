#include<iostream> // printing the no:of ways where 'n' friends can remain
using namespace std;    // single or paired up

int FriendsPairing(int n)
{
    if(n==0 || n==1 || n==2)
    {
        return n;
    }

    return FriendsPairing(n-1) + FriendsPairing(n-2) *(n-1);

}
int main()
{
cout<<FriendsPairing(4);// for  4 friends..no:of ways to be single and paired up is 10
    return 0;            // o/p will be 10
}