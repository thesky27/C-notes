#include<iostream>
using namespace std;
int main()
{
	int k,T,n,i,c,a,j;
	cin>>T;
	for(j=0;j<T;j++)
	{
		cin>>n;
		c=0;
	 for(i=1;i<=n/2;i++)
	 {
	 	a=i;
	 	int sum=0,o=1;
	 	while(sum<=n/a)
	 	{
	 		if(sum==n/a)    
			 {
			  c=1;
			  break;   
			}	
	 		else     
	 		{
	 			sum=sum+o;
	 			o=o*2;
			}
		 }
	 }
	 if(c==1)
	 cout<<"YES"<<endl;	
	else
	cout<<"NO"<<endl; 
	}
	return 0;
 } 

 
 
