#include<iostream>      // how to dereference array..and print array elements by using pointers
using namespace std;
int main()
{
    //basics with array....
    int arr[] = {10,20,30,40};
    cout<<arr<<endl;  // address of 0th index
    cout<<*arr<<endl; // value at 0th index
    // here the variable "arr" behaves the same as that of a pointer





     cout<<endl;   // separate each pgme o/p




    // printing array using pointers
    int ar[] = {10,20,30};
    int *ptr =ar;   // because "ar" stores the base address of the array
    for(int i=0; i<3; i++)
    {
        cout<<*ptr<<" ";  
        ptr++;       // jumping  4bytes...and so on....
    }

    


    cout<<endl;    // separate each pgme o/p





    //printing array without pointers....only using "arrr" variable
    int arrr[] = {10,20,30,40};
     for(int i=0; i<4; i++)
     {
         cout<<*(arrr+i)<<" ";      // cout<<arrr<<" "      ??? why not like this?????
     }                              // arrr++  - illegal  these cannot be given because arrr is constant u cannot change the value of arrr

    


   return 0; 
}