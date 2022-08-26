#include<iostream>
using namespace std;

void suresh(int k){
    cout<<"suresh integer"<<k<<endl;
}
void rahul(int m){
    cout<<"rahul integer"<<m<<endl;
    m++;
    suresh(m);
}
void ramesh(int n){
    cout<<"ramesh integer"<<n<<endl;
    n++;
    rahul(n);
}
int main()
{
    int n=21;
    ramesh(n);
    cout<<"wapas in main function"<<n<<endl;
    return 0;
}
