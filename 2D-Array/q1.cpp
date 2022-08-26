#include<iostream>
using namespace std;

bool search(int arr[3][3], int target,int row,int col )
{
    for(int i=0;i<row;i++)
    {
        //for each row
        for(int j=0;j<col;j++)
        
            if (arr[i][j] == target)
            {
                return true;
            }
    }
    return false;
}


int main()
{

    int arr[3][3]={5,1,3,4,6,8,9,10,11};
    int n=3;
    cout<<"Searching 11 : "<<search(arr,11,3,3)<<endl;
    

}