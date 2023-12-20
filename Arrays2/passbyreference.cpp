#include<iostream>
using namespace std;


void solve(int &a)
{
    a++;
    cout<<"Printing the void function :"<<a<<endl;
}


int main()
{
    int a =5;
    solve(a);

    cout<<"Printing the main function :"<<a<<endl;
    return 0;
}