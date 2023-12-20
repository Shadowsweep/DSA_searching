// Reverrse an array
#include<iostream>
using namespace std;


// int revArray(int arr[],int size)
// {

//     for(int i =1;i<=size;i++)
//     {  cout<<arr[size-i]<<" ";

//     }
// }

void reverseArray(int arr[],int size){
  int left=0;
  int right = size-1;

//   for(int left=0;right=size-1;left<=right;left++;right--)
//   {
//     swap(arr[left],arr[right]);
//   }

  while(left <= right)
  {
    swap(arr[left],arr[right]);
    left++;
    right--;
  }
  //printing the array
  for(int i=0;i<size;i++)
  {
    cout<<arr[i]<<" ";
  }
}

void extremePrint(int arr[],int size)
{
    int left;
    int right =size-1;

    while(left<=right)
    {   if(left==right)
      {
        cout<<arr[left]<<endl;
       }
       else{
        cout<<arr[left]<<endl;
        cout<<arr[right]<<endl;
        }
        left++;
        right--;
    }

   
}

int main()
{
    // int arr[] = {10,20,30,40,50,60};
    
    int arr[] ={10,20,30,40,50,60,70};
    int size=7;
    // int rev = revArray(arr,size);
    // reverseArray(arr,size);
    extremePrint(arr,size);
    return 0;
}