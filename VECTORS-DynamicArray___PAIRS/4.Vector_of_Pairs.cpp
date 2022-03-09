#include<iostream>  // Program demonstarting the idea of vector of pairs
#include<vector>
#include<algorithm>
using namespace std;

// my comparator defining
bool Mycompare (pair<int,int> p1 , pair<int,int>p2)
{
    return p1.first<p2.first;
}



int main()
{
    int arr[] = {10,16,7,14,5,3,12,9};

    vector <pair<int,int>> V;

    //vector creation
    for(int i=0;  i< (sizeof(arr)/sizeof(arr[0])) ; i++)
    {
        V.push_back(make_pair(arr[i],i));
    }


    // sorting vector
    sort(V.begin(), V.end() , Mycompare);


    //Main-operation
    for(int i=0; i<V.size() ; i++)
    {
        arr[V[i].second] = i;
    }

  
     // printing
    for(int i=0; i<V.size() ; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;

}