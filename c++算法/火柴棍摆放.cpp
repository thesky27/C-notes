#include<iostream>
using namespace std;
int main()
{ 
    int fun(int m);
	int a,b,c,m,sum=0;
	cin>>m;
	for(a=0;a<=1111;a++)
	for(b=0;b<=1111;b++)
	{
		c=a+b;
		if(fun(a)+fun(b)=fun(c)==m-4)
		{
			cout<<a<<"+"<<b<<"="<<c<<endl;
			sum++;
		}
	}
	return 0;
}
  int fun(int x)
  {
  	int num=0;
  	int f[10]={6,2,5,5,4,5,6,3,7,6};
  	
  }
