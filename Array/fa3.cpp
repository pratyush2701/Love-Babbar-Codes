#include<iostream>
using namespace std;
int printEven(int n)
{
    // for(int i=2;i<=n;i=i+2)
    // {
    //     cout<<i<<" ";
    // }

    // trick 2
    for(int i=1;i<=n;i++)
    {
        if (i%2==0)
        {
            cout<<i<<" ";
        }
    }
   
}
int main()
{
    int n=15;
    printEven(n);
    return 0;

}