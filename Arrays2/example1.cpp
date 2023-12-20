#include<iostream>
using namespace std;


void solve(int jaadu)
{
    jaadu--;
    cout<<jaadu+10<<" +
    ";
    return;
}

int main()
{
    int sundari =100;
    sundari--;
    sundari -=5;
    solve(sundari);
    cout<<sundari;
    return 0;
}