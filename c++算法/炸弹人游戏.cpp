#include<iostream>
using namespace std;
int main()
{
	char a[20][20];
	int i,j,sum,map=0,p,q,x,y,n,m;
	cin>>n>>m;//���弸�м���
	for(i=0;i<=n-1;i++)
	{
		cin>>a[i];
	} 
	for(i=0;i<n;i++)
	{
		for(j=0;j<=m;j++)
		{
			if(a[i][j]=='.')
			{
				sum=0;
				x=i;y=j;
				while(a[x][y]!='#')
				{
					if(a[x][y]=='G') sum++;x--;
				}
				sum=0;
				x=i;y=j;
				while(a[x][y]!='#')
				{
					if(a[x][y]=='G') sum++;x++;
				}
				sum=0;
				x=i;y=j;
				while(a[x][y]!='#')
				{
					if(a[x][y]=='G') sum++;y--;
				}
				sum=0;
				x=i;y=j;
				while(a[x][y]!='#')
				{
					if(a[x][y]=='G') sum++;y++;
				}
			  if(sum>map)
			  {
			  	map=sum;
			  	p=i;
			  	q=j;
			  } 
			}
		}
	 } 
	 cout<<"����������"<<map<<"������"<<endl;
	 return 0; 
}
