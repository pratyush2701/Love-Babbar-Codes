#include<iostream>
using namespace std;

void swapAlternates(int arr[],int n)
{
    int i=0;
  
    while(i<n)
    {
       
        if(i+1<n)
        {
            swap(arr[i],arr[i+1]);
        }

    i=i+2;

    }
}
int main()
{
    int arr[]={3,5,7,9,2,5};

    swapAlternates(arr,6);

    //for printing

    for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<" ";
    }

    
}