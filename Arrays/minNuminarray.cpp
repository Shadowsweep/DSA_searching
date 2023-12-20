// print min in ARRAY
#include<iostream>
#include<limits.h>
using namespace std;

int findMinarray(int arr[],int size)
{
    int minAns = INT_MAX;

    for(int i=0;i<size;i++)
    {
        if(arr[i]<minAns)
        {
            minAns = arr[i];
        }
    }
    return 	minAns ;
}



int main()
{    // -2 to the power 31
    //  cout<<INT_MIN<<endl;
     
    //  2 to power 31 -1
    //  cout<<INT_MAX<<endl;
   int arr[] = {10,8,4,6,3,5,8};
   int size =7;

   int minimum = findMinarray(arr,size);
   cout<<"Minimum is "<<minimum << endl;
    return 0;
}






























