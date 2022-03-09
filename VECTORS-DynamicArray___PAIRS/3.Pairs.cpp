#include<iostream>
#include<utility>
using namespace std;
int main()
{
    pair<int,char> p;
    p.first = 10;
    p.second = 'k';
    cout<<p.first<<" "<<p.second<<endl;

     
     cout<<endl;
    //operations

    pair<string,double> p1;
    p1.first = "Karthika";
    p1.second = 2.34;
    cout<<p1.first<<" "<<p1.second;

     
    cout<<endl;
    //another method

    pair<string,string> p2("karthika","vijayan");
    cout<<p2.first<<" "<<p2.second;
}