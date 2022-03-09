#include<iostream>
using namespace  std;
int main()  //printing numbers from 1 to 100 which are not divisible by 3
{


    for(int i=1;i<=100;i++)
    {
        if(i%3==0)
        {
            continue; //skip that partiular iteration --try with break also to see the changes 
        }
        cout<<i<<endl;
    }
    return 0;
}

