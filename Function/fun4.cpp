#include<iostream>
using namespace std;
int printFactorial(int n){
    int fact=1;
    for(int i=n;i>=1;i=i--)
    {
        fact=fact*i;
        
    }
}
int main()
{
    int n=21;
    printFactorial(n);
}