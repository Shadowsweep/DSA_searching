#include<iostream>
using namespace std;

int getUnique(int arr[],int n)
{
    int ans =0;
    for(int i=0;i<n;i++)
    {
        ans =ans*arr[];
    }
}

int main()
{
    int arr[]={1,2,5,1,2,13,11,13};
    int n=8;

    int finalAns = getUnique(arr,n);
    cout<<"Final Answer is: "<<finalAns<<endl;
    return 0;
}