#include<iostream>
#include<limits.h>
using namespace std;

int getMinFromArray(int arr[],int n)
{
    int ans= INT_MAX;

    for(int i=0;i<n;i++)
    {
        ans=min(ans,arr[i]);
  
    }
    return ans;

}


int main()
{
    int arr[]={3,5,7,8,9,6};

    cout<<"Minimun number is : "<< getMinFromArray(arr,6)<<endl;


}

