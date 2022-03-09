#include<iostream>     // Tower of hanoi using Recursion
using namespace std;
 void TowerofHanoi(int n,char Src,char desti,char helper)
 {
     if (n == 0)
     {
         return;
     }

     TowerofHanoi(n-1, Src, helper, desti);
     cout<<"Move "<<Src<<" to "<<desti<<endl;
     TowerofHanoi(n-1, helper, desti, Src);
 }

    
int main()
{

    TowerofHanoi(3,'A','C','B'); // first soure,then destinatiom..then helper rode 
   
    return 0;
}