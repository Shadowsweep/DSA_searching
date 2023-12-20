#include<iostream>
using namespace std;


int main()
{
    int arr[5];
    int n=5;
    // input
    cout<<"Enter numbers with space: ";
   for(int i=0;i<n;i++)
   {
    cin>>arr[i];
   }
//    calculate the sum

int sum =0;
for(int i=0;i<n;i++)   
{
    sum = sum +arr[i];
}
cout<<"sum is: "<<sum<<endl;
    return 0;
}