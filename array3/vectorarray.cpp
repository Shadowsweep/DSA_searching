#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;


int main()
{  
    // int arr[5];
//    vector<int> v(5,101);


//    cout<<"Size of vector: "<<v.size();

//2D Array

vector<vector<int> > arr(5, vector<int>(10,-1));


//    cout<<endl<<"Printing the vector "<<endl;

   for(int i=0;i<arr.size();i++)
   {
    for(int j=0;j<arr[i].size();j++)
    {
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
   }
   // Find out about jagged array
vector<vector<int> > brr;
   vector<int> vec1(10,0);
   vector<int> vec2(20,1);
   vector<int> vec3(10,0);
   vector<int> vec4(30,1);
   vector<int> vec5(10,0);
    brr.push_back(vec1);
    brr.push_back(vec2);
    brr.push_back(vec3);
    brr.push_back(vec4);
    brr.push_back(vec5);
    
    return 0;
}