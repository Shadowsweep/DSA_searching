// count no. of 0's and 1's in an array0
#include<iostream>
using namespace std;


void countZeroOne(int arr[],int size)
{
    int zeroCount =0;
    int oneCount = 0;

    for(int i=0;i<size;i++)
    {
        if(arr[i]==0)
        {
            zeroCount++;
        }
        else{
            oneCount++;
        }
    }

    cout<<"Count of Zeros are: "<<zeroCount<<endl;
    cout<<"Count of Ones are: "<<oneCount<<endl;
}

int main()
{  int arr[]={0,1,0,1,0,1,0,1,1,1,0,1,0,1,0};
//   zero -> 7 one -> 8
    int size =15;
    countZeroOne(arr,size);
    return 0;
}