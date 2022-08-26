#include<iostream>
using namespace std;

int printFactorial(int n)
 
{
     int fact=1;
    for(int i=n;i>=1;i--)
    {
       
        fact=fact*n;
        
    }
    return fact;

}
int main()
{
    int n=5;
    int fact=printFactorial(5);
    cout<<fact<<endl;
    

}