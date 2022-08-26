#include<iostream>
#include<limits.h>
using namespace std;

int getMaxFromArray(int arr[],int n)
{
    int maxi=INT_MIN;

    for(int i=0;i<n;i++)
    {
    maxi=max(maxi,arr[i]);
    }
    return maxi;
}

int main()
{
    int arr[]={3,5,6,9,22,5};

    cout<<"Maximum value is: "<<getMaxFromArray(arr,6)<<endl;

   
}