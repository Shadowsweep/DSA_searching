#include<iostream>
using namespace std;


bool findTarget(int arr[][4],int row,int col,int target)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            return true;
        }
    }
}


int main()
{
   
     int arr[3][4]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}};
 
    int row=3;
    int col=4;
    
    int target =11;

    cout<<"Found or not ? ->"<<findTarget(arr,row,col,target)<<endl;

    // input array 2D
    // int arr[3][3];
    // int row=3;
    // int col=3;
    // for(int i=0;i<row;i++)
    // {
    //     for(int j=0;j<col;j++)
    //     {  cout<<"Enter the input for row index: "<<i<<"column index :"<<j<<endl;
    //        cin>>arr[i][j];
    //     }
    // }

    return 0;
}