#include<stdio.h>
#include<iostream>
using namespace std;
int a[101],n;
void select(int left,int right)//���庯��ʱҪ�������������� 
{
	int i,j,t,temp;
	if(left>right) return ;//����Ҫ�н����ı�־ 
	temp=a[left];         //ע���Ǹ��¶���֮��ı�����ֵ 
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
	{a[left]=a[i];   //����������ȵ�ֵ 
	a[i]=temp;
	} 

	select(left,i-1);//������i��j��ֵ����ȵ� 
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
	select(1,n);//�Ǵ�1��n 
	for(i=1;i<=n;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}
