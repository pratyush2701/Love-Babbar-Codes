#include<iostream>
using namespace std;
//Print even nos
void printEven(int n){
    for(int i=2;i<=n;i=i+2)
    {
        cout<< i <<" ";   
    }
}
int main()
{
    int n=25;
    printEven(n);
}