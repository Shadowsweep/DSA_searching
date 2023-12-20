#include<iostream>
using namespace std;



    void fun(int a[],int n )
    {    
        cout<<"Array elements are :"<<endl;
        for(int i=0;i<n;i++ )
        {
            cout<<a[i]<<endl;
        }
    }
   

int main()
{ //static memory allocation of array
//   int arr[5] ={1,2,3,4,5};
 int n;
 cout<<"Enter no. of elements : ";
 cin>>n;
 int *arr = new int[n];
 cout<<"Enter elements :";
 for(int i=0;i<n;i++)
 {
    int data;
    cin>>data;
    arr[i] =data;
 }
 
 
  fun(arr,5);


}