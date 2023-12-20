#include<iostream>
using namespace std;


int main()
{
    int arr[5] ={10,20,5,6,4};
    int target=6;
    int  n=5;

    bool flag=0;
    // 0 - > Not found
    // 1 - > Found
    for(int i=0;i<n;i++)
    { if(arr[i]==target)
    {   flag=1;
        cout<<"element found at index "<<i<<endl;
        break;
    }

    }

    if(flag==1)
    {
        cout<<"target  found";
    }
    else{
        cout<<"Target not found" ;    }
    return 0;
}