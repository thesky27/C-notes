#include <iostream>
#include<cstring>
using namespace std;
int main()
{
int a[15],b1,b2,b3,n,c;
for(int i=0;i<15;i++)
a[i]=14-i;
for(int i=0;i<15;i++)
cout<<a[i]<<" ";
cout<<endl;b1=0;b2=14;c=0;
cout<<"请输入一个数：";
cin>>n;
while(b1<=b2)
{
b3=(b1+b2)/2;
if(a[b3]>n)  b1=b1+1;
if(a[b3]<n)  b2=b2-1;
if(a[b3]==n)
{cout<<"这个数是数组中第"<<b3+1<<"个元素的值";
c=1;break;
}

} if(c==0) cout<<"无此数";
return 0;
}


































/*#include<iostream>
using namespace std;
int main()
{
	int e[10][10],k,i,j,n,m,t1,t2,t3;
	int inf=9999;
	cin>>n>>m;
	for(i=1;i<=n;i++)
	for(j=1;j<=n;j++)
	{
		if(i==j) e[i][j]=0;
		else e[i][j]=9999;
	 } 
	 for(i=1;i<=m;i++)
	 {
	 	cin>>t1>>t2>>t3;
	 	e[t1][t2]=t3;
	 }
	 for(k=1;k<=n;k++)
	 for(i=1;i<=n;i++)
	 for(j=1;j<=n;j++)
	 {
	 	if(e[i][j]>e[i][k]+e[k][j]) 
		 e[i][j]=e[i][k]+e[k][j];
	 }
	 for(i=1;i<=n;i++)
	 for(j=1;j<=n;j++){
	 	
	 	cout<<e[i][j]<<" ";
	 	
	 }	
	return 0;
}*/ 
