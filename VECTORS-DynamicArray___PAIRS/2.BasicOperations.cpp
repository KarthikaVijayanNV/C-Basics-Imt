#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
  //POP BACK operation
   vector<int> V;
   V.push_back(1);
   V.push_back(2);
   V.push_back(3);

   V.pop_back();    // 1,2

   for(auto elements : V)
   {
       cout<<elements<<" ";
   }

   cout<<endl;

   
   
   
   
   //Specifying the size of Vector
   vector<int> v(3,50);
   
   for(auto elements : v)
   {
       cout<<elements<<" ";
   }

   cout<<endl;


   
   
   
   // Swapping two Vectors
   //vector 1
   vector<int> V1 ;
      V1.push_back(10);
      V1.push_back(20);
      V1.push_back(30);    // 10,20,30
   
   // vector 2
    vector<int> V2 (3,100);  // 100,100,100
    //swapping two vectors
    swap(V1,V2);

    //print V1
    for(auto elements : V1)
    {
       cout<<elements<<" ";
    }
    //print V2
    for(auto elements : V2)
   {
       cout<<elements<<" ";
   }



   //SORTING VECTOR
    vector<int> V3 ;
    V3.push_back(4);
    V3.push_back(7);
    V3.push_back(1);
    sort(V3.begin() ,V3.end());  // sorts 1 4 7

    for(auto elements : V3)
   {
       cout<<elements<<" ";
   }




    return 0;
}