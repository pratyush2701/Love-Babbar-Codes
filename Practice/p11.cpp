#include<iostream>
using namespace std;
void printArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" "; 
    }
}
bool search(int arr[],int size,int target)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==target)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int arr[100];
    cout<<"Enter the size of array:";
    int n;
    cin>>n;
    //taking input
    for(int i=0;i<=n;i++)
    {
        cin>>arr[i];

    }
    if(search(arr,5,7))
    {
        cout<<"Element found";
    }
    else{
        cout<<"Element not found"<<endl;
    }
    cout<<"Printing elements in an array"<<endl;
    printArray(arr,n);
    

}