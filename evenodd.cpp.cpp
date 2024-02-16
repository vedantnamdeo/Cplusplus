#include<iostream>
using namespace std;
void even(int a)
{
	for(int i=0;i<=a;i++)
	{
		if(i%2==0)
		{
			cout<<i<<"  "<<endl;
		}
	}
}
void odd(int b)
{
	for(int j=0;j<=b;j++)
	{
		if(j%2==1)
		{
			cout<<j<<"  ";
		}
	}
}
int main()
{
even(50);
odd(50);
}
