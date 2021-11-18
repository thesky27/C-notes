#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int a[20],i,j,n;
	cin>>n;int temp;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n-1;i++)
	for(j=0;j<n-i-1;j++)
	{
		if(a[j]<a[j+1])
		{
			temp=a[j];a[j]=a[j+1];a[j+1]=temp;
		}
	}
	cout<<a[0]<<" ";
	for(i=1;i<n;i++)
	{
	   if(a[i]!=a[i-1])
	   {
	   	cout<<a[i]<<" ";
	   }
	}
	return 0;
 } 
