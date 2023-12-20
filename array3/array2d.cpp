#include<iostream>
using namespace std;

//row wise 

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

//column wise 

void columnwiseArray(int arr[][4],int row,int col)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
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
    printArray(arr,row,col);
    columnwiseArray(arr,row,col);

    return 0;
}