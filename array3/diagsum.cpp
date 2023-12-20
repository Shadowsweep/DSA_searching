#include<iostream>
using namespace std;

//row wise 

void printSumDiagonal(int arr[][4],int row,int col)
{int sum=0;
    for(int i=0;i<row;i++)
    {  
             
              sum = sum + arr[i][i];
             
              
        }
       cout<<sum<<" ";
    }


int main()
{
    int arr[4][4]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
         {5,6,7,8}};

    int row=4;
    int col=4;
    // printArray(arr,row,col);
    // columnwiseArray(arr,row,col);

 printSumDiagonal(arr,row,col);


    return 0;
}