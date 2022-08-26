#include<iostream>
using namespace std;
int printSquare(int n)
{
    for(int i=1;i<=n;i++)
    {
        cout<<i*i<<" ";
    }
}
int main()
{
    int n=6;
    printSquare(n);
}