#include<bits/stdc++.h>  //pythagorean triplets eg: 3,4,5  (5^2 = 4^2 + 3^2)//pythagorius therom
using namespace std;    // another eg: 6,8,10

bool check(int x,int y,int z)
{
    int a=max(x,max(y,z));       // finding maximum and storing in a
    int b,c;

    if(a==x)        // if maximum is x store y and z in b,c
    {
        b=y;
        c=z;
    }
    else if(a==y)   // if maximum is y  store x and z in b,c
    {
        b=x;
        c=z;
    }
    else            // if maximum is z store x,y in b,c
    {
        b=x;
        c=y;
    }


    if(a*a == b*b + c*c)    // pythagorean logic ( a^2 = b^2 + c^2)
    {
        return true;
    }
    else
    {
        return false;
    }
}
   
int main()
{
    int x,y,z;
    cout<<"Enter 3 numbers:"<<endl;
    cin>>x>>y>>z;

    if(check(x,y,z))       // if(check(x,y,z)==true))  it means this,by default if checks that only
    {
        cout<<"Pythagorean Triplets";
    }
    else
    {
        cout<<"Not a pythagorean triplets";
    }
    
   return 0;
} 
