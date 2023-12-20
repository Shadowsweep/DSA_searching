#include<iostream>
using namespace std;


int main()
{
    // int arr[50] ={5,1,0,6,9};

    // int  n =5;
    // for(int i=0;i<n;i++)
    // {
    //     cout<<arr[i]<<endl;
    //     // cin<<arr[i]<<endl;
    // }

    int arr[5];
    int n =5;
    for(int i=0;i<n;i++)
    {   
        cout<<"Enter the value for index :"<<i<<" ";
        cin>>arr[i];
        cout<<endl;
    }

    cout<<"Printing the array "<<endl;
     for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
        // cin<<arr[i]<<endl;
    }
    
    
    return 0;
}