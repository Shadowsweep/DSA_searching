#include<iostream>
using namespace std;


// bool findTarget(int arr[][4],int row,int col,int target)
// {
//     for(int i=0;i<row;i++)
//     {
//         for(int j=0;j<col;j++)
//         {
//             return true;
//         }
//     }
// }
void printArray(int arr[][4],int row,int col)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

void transpose(int arr[][4],int row,int col )
{
    for(int i =0; i<row;i++)
    {
        for(int j=i;j<col;j++ )
        {
            swap(arr[i][j],arr[j][i]);
        }
    }
}


int main()
{
   
     int arr[4][4]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {1,2,3,4}};
 
    int row=3;
    int col=4;
    
    // int target =11;

    // cout<<"Found or not ? ->"<<findTarget(arr,row,col,target)<<endl;

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
    cout<<"Printing before transpose"<<endl;
    printArray(arr,row,col);

    cout<<"Doing transpose"<<endl;
    transpose(arr,row,col);

    cout<<"Printing after transpose"<<endl;
    printArray(arr,row,col);

    return 0;
}