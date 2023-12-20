#include<iostream>
using namespace std;

//row wise 

void printSum(int arr[][4],int row,int col)
{
    for(int i=0;i<row;i++)
    {  int sum =0;
        for(int j=0;j<col;j++)
        {
           sum = sum + arr[i][j];
        }
        cout<<sum<<" ";
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
    // printArray(arr,row,col);
    // columnwiseArray(arr,row,col);

 printSum(arr,row,col);


    return 0;
}