#include<iostream>
#include<vector>

using namespace std;

void print(vector<int>v)
{
    int size = v.size();
    for (int i = 0;i < size ; ++i){
      // cout<<v[i]<<" ";
      cout<<v.at(i)<<" ";
    }
}


int main()
{    //na user se puchna hai just keep isnserting
     // just keep inserting the data
   vector<int>arr;
   vector<int>arr2(5,-1);
   vector<int>arr3={1,2,3,4,5};

   //how to copy vector
   vector<int>arr5(arr3);
   print(arr5);
  
}