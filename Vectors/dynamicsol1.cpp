#include<iostream>
#include<vector>

using namespace std;

void print(vector<int>v)
{
    int size = v.size();
    for (int i = 0;i < size ; ++i){
      // cout<<v[i]<<" ";
      cout<<v.at(i)<<endl;
    }
}


int main()
{    //na user se puchna hai just keep isnserting
     // just keep inserting the data
   vector<int>v;
   // v.push_back(1);
   // v.push_back(2);
   // v.push_back(3);
   // print(v);
   // v.pop_back();
   // print(v);
   // v.pop_back();
   // print(v);
   int n;
   cout<<"Enter n : ";
   cin>>n;
   cout<<"Enter numbers: ";
   for (int i=0;i<n;++i) {
      int d;
      cin>>d;
      v.push_back(d);
   }
  print(v);

//   To clear vector use v.clear()
v.clear();
print(v);
v.push_back(10);
print(v);
}