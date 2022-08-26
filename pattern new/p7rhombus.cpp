#include<iostream>
using namespace std;
int main()
{
     int n=4;
    for(int row=1;row<=n;row++)
    {
        for (int col=1;col<=n-row;col++)
        //for space
        {
            cout<<"  ";
        }
        for(int col=1;col<=row;col++)
        ///star
        {
            cout<<"* ";
        }
        cout<<endl;

        for(int row=1;row<=n;row++){
        //for each row ,print stars=row ka no.
        for(int col=1;col<=row;col++)
        {
            cout<<"* ";
        }
        cout<<endl;
      
    }
  
    }
    cout<<endl;
    
}