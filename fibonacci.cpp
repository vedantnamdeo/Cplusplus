#include<iostream>
using namespace std;
int main()
{
    int a=0;
    int b=1;
    cout<<a<<" ";
    cout<<b<<" ";
    for(int i=2;i<10;i++)
    {
        int m=a+b;
       cout<<m<<" ";
       a=b;
       b=m;

    }
    return 0;
}