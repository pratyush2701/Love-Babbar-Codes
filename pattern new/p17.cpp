#include<iostream>
using namespace std;
int main()
//prac invereted full pyramid
{
    int n=4;
    for(int row=1;row<=n;row++)
    {
        for(int col=1;col<=row-1;col++)
        {
            cout<<" ";
        }
        for(int col=1;col<=n-row+1;col++)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
}