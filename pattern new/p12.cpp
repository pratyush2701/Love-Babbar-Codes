#include<iostream>
//hollow inverted half pyramid
using namespace std;
int main()
{
    int n=7;
    for(int row=1;row<=n;row++)
    {
        if(row==1 || row==n)
        {
            for(int col=1;col<=n-row+1;col++)
            {
                cout<<"*";
            }
        }
        else{
            cout<<"*";
            for(int col=1;col<=n-row-1;col++)
            {
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }
}

