#include<iostream>
using namespace std;

bool binarySearch(int arr[],int n,int target){
    int start =0;
    int end =n-1;
    int mid=(start/2)+(end/2);

    while(start<=end)
    {
        int midElement =arr[mid];
        if(arr[mid]==target)
        {
            return true;
        }
        if(target<arr[mid])
        {
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=start/2+end/2;
    }
    return false;

}
int main()
{
    int arr[]={2,4,6,9,11,23};
    int n=7;
    int target=23;

    if(binarySearch(arr,n,target)){
        cout<<"Element Found"<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }
    return 0;
}
