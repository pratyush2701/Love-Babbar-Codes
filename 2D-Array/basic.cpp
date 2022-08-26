#include<iostream>
using namespace std;
int main()
{
    //creation
    int arr[3][3];

    //int arr[3][3]={0};

    //int arr[3][3]={1,2,3,4,5,6,7,9,0};
    
    //int arr[4][2]={ {2,3},{5,3},{1,9},{3,6}};

    int n=3;

    //input
    cout<<"Enter values"<<endl;
    
    for(int i=0;i<n;i++)
    {

        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
        
    }

    //printing entire 2d matrix

    for(int i=0;i<n;i++)
    {

        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
   

}