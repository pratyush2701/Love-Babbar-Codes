#include<iostream>
#include<algorithm>
using namespace std;

int binarySearch(int arr[],int n,int target){
    
    int start = 0;
    int end = n-1;

    int mid = (start/2)+(end/2);

    while(start<=end)
    {
        int midElement = arr[mid];

        if(midElement == target)
        {
            return mid;
        }
        if(target < midElement) // left me hoga tb
        {
            end = mid-1;
        }
        else{
            start=mid+1;
        }
         mid = (start/2)+(end/2);
    }

    return -1;

}
int main()
{
    int arr[]={2,4,6,8,9,11,23};
    int n=7;
    int target=23;

    cout<< binary_search(arr,arr+n,target)<<endl;  // STL
    

    cout<<(binarySearch(arr,n,target))<<endl;
     

    return 0;
}
