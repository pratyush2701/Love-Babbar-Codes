#include<iostream>
using namespace std;
void printArray(int arr[],int size)
{
    for(int i=0;i<=size;i++)
    {
        cout<<arr[i]<<" "<<endl;
    }
}
void util(int arr[],int size)
{
    arr[0]=23;
    cout<<"printing in util func"<<endl;
    printArray(arr,3);

}
int main()
{
    int arr[]={3,6,9};
    util(arr,3);
    cout<<"Printing in main function"<<endl;
    printArray(arr,3);

}