#include<iostream>
using namespace std;
int main()
{
	int a[11],i,b,j;
	for(i=0;i<=10;i++)
	{
	   a[i]=0;
	}
	for(i=0;i<5;i++)
	{	cin>>b;
	    a[b]++;
	}
	for(i=10;i>=0;i--)
	{
		for(j=1;j<=a[i];j++)
		cout<<i;
	}
	return 0;
 } 
