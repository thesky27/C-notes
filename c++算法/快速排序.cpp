#include<stdio.h>
#include<iostream>
using namespace std;
int a[101],n;
void select(int left,int right)//定义函数时要标明函数的类型 
{
	int i,j,t,temp;
	if(left>right) return ;//必须要有结束的标志 
	temp=a[left];         //注意是给新定义之后的变量赋值 
	i=left;
	j=right;
	while(i!=j)
	{
		while(a[j]>=temp&&i<j) j--;
		while(a[i]<=temp&&i<j)  i++;
		if(i<j)
		{
			t=a[i];a[i]=a[j];a[j]=t;
		}
	}
	if(i==j)
	{a[left]=a[i];   //交换两个相等的值 
	a[i]=temp;
	} 

	select(left,i-1);//在这里i与j的值是相等的 
	select(j+1,right);
}
int main()
{
	int i,j;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	select(1,n);//是从1到n 
	for(i=1;i<=n;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}
