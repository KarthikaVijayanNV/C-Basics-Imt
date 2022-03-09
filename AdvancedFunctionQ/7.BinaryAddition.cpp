#include<bits/stdc++.h>
using namespace std;


int reverse(int n)
{
    int ans=0;
    while(n>0)
    {
        int lastdigit=n%10;
        ans=ans*10+lastdigit;
        n=n/10;
    }
    ans=ans/10;   // if not given, for some cases it won't work 
    return ans;
}



int BinaryAddition(int a,int b)
{
    int ans=1;
    int prevcarry=0;

    while(a>0 && b>0)         // value given in the variable should be greater than 0
    {
        if(a%2== 0 && b%2 ==0)    // when the both digits are zero
        {
            ans= ans*10 +prevcarry;
            prevcarry =0;
        }
        else if((a%2==0 && b%2==1) ||( a%2==1 && b%2 ==0))   // when both digits are either 1 or 0
        {
            if(prevcarry==1)
            {
                ans=ans*10 +0;
                prevcarry =1;
            }
            else   // means ...else(prevcarry==0)
            {
                ans=ans*10+ 1;
                prevcarry=0;
            }
        }
        else   // means if (a%2==1 && b%2==1 )  if both digits are 1
        {
            ans=ans*10+prevcarry;
            prevcarry=1;
        }

        a=a/10;    // modifying a and b
        b=b/10;
    }
    
    while(a>0)    // a is still there b completed
    {
        if(prevcarry==1)
        {
            if(a%2==1)
            {
                ans=ans*10 + 0;
                prevcarry= 1;

            }
            else // means   else(a%2==0)
            {
                ans=ans*10 +1;
                prevcarry=0;
            }
        }
        else // means (prevcarry==0)
        {
            ans=ans*10 + (a%2);
        }
        a=a/10;
    }

    while(b>0)    // b is still there a is completed
    {
        if(prevcarry==1)
        {
            if(b%2==1)
            {
                ans=ans*10 + 0;
                prevcarry= 1;

            }
            else
            {
                ans=ans*10 +1;
                prevcarry=0;
            }
        }
        else
        {
            ans=ans*10 + (b%2);
        }
        b=b/10;
    }


    if(prevcarry==1)     // what if both number has same number of digits   ....then we have to take
    {                    //         care of carry 1.........last carry while adding binary 
        ans=ans*10+1;
    }
    ans=reverse(ans);    // now entire ans should be tilted...means reversed to get the original ans

    return ans;
    
}




int main()
{ 
    int a,b;
    cout<<"Enter a and b:"<<endl;
    cin>>a>>b;

    cout<<BinaryAddition(a,b)<<endl;
    return 0;
} 