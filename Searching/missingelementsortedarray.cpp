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

int findmissingelement(int arr[],int n, int target)
{
    int s=0;
    int e =n-1;
    int mid =   s +  (e-s)/2;
    int ans = -1;
    while(s<=e)
    { 
        int diff = arr[mid] -mid;
        if(diff==1)
        {
            s = mid +1;
        }
        else{
            //ans store karo 
            ans = mid;
            //left me jaao
            e = mid - 1;
        }
        mid = s + (e-s)/2;



    }
    if(ans+1 ==0 ){
        return n+1;
    }
    return ans+1;
}


int main()
{
    int arr[] ={1,2,3,30,30,30,70,80,90,100};
    int target = 30;
    int n = 9;

    int ansIndex = findfirstOccurence(arr,n,target);
    if(ansIndex == -1){cout<<"Element not found";}else cout<< "Found at index "<< ansIndex <<endl;
      
    return 0;
}