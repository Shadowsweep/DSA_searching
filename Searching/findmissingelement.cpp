#include<iostream>
using namespace std;

int binarySearch(int arr[],int n,int target)
{
    int start=0;
    int end = n-1 ;

    int mid =(start + end)/2;
    
    while(start<=end)
    {
        if(arr[mid]== target)
        {
            return mid;
        }
        else if (target > arr[mid])
        {
            start= mid + 1;
        }
        else  if(target<arr[mid])
        {
            end = mid-1;
        }
        mid = (start + end)/2;
    }


     return -1;
}


int findfirstOccurence(int arr[],int n, int target)
{
    int s=0;
    int e =n-1;
    int mid = (s + e)/2;
    int ans = -1;
    while(s<=e)
    {
        if(arr[mid]==target)
        {
            ans = mid;
            e=mid-1;
        }
        else if(target>arr[mid])
        {
            s = mid +1;
        }
        else if(target<arr[mid])
        {
            e = mid -1;
        }
        mid =(s+e)/2;
    }
    return ans;
}


int findfirstlastOccurence(int arr[],int n, int target)
{
    int s=0;
    int e =n-1;
    int mid = (s + e)/2;
    int ans = -1;
    while(s<=e)
    {
        if(arr[mid]==target)
        {
            ans = mid;
            s=mid+1;
        }
        else if(target>arr[mid])
        {
            s = mid +1;
        }
        else if(target<arr[mid])
        {
            e = mid -1;
        }
        mid =(s+e)/2;
    }
    return ans;
}

int findMissingElement(int arr[],int n)
{
    
}

int findTotalOccurence(int arr[],int n,int target)
{
       int fristoccurence = findfirstOccurence( arr, n,  target);
       int lastoccurence = findfirstlastOccurence( arr, n,  target);
   
       int totaloccurence  =  lastoccurence - fristoccurence +1;

       return totaloccurence; 
}


int main()
{
    int arr[] ={10,20,30,30,30,30,70,80,90,100};
    int target = 30;
    int n = 9;

    // int ansIndex = findfirstlastOccurence(arr,n,target);
    // if(ansIndex == -1){cout<<"Element not found";}else cout<< "Found at index "<< ansIndex <<endl;
      int ans = findTotalOccurence(arr,n,target);
      cout<<"Total Occurence :"<<ans<<endl;
    return 0;
}