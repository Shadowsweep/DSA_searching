#include<iostream>
using namespace std;

solve(int &m)
{
    m--;
    m =m*10;
    cout<<m<<" ";
}


int main()
{
    int marks =90;
    marks++;
    solve(marks);
    cout<<marks<<endl;
    return 0;
}