#include<iostream>
//left and right shift
using namespace std;
int main()
{
    /*
    cout<<(17>>1)<<endl;
    cout<<(17>>2)<<endl;
    cout<<(19<<1)<<endl;
    cout<<(21<<2)<<endl;
    */
    
   int a=1;
   int b=2;
   if(a-- >0 && ++b >2)
   {
       cout<<"Stage 1- Inside If";
   }
   else{
       cout<<"Stage 2-Inside else";
   }
   cout<<a<<" "<<b<<endl;
}