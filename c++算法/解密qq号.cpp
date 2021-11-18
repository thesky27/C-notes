#include<iostream>
using namespace std;
struct queue{
	int data[20];
	int head;
	int tail;
	
};
int main()
{
	queue q;q.head=1;q.tail=1;
	int i,j,temp;
	for(i=1;i<10;i++)
	{
		cin>>q.data[q.tail];
		q.tail++;
	}
	while(q.head<q.tail)//这个条件是最重要的 
	{
		cout<<q.data[q.head];
		q.head++;
		q.data[q.tail]=q.data[q.head];
		q.tail++;
		q.head++;
		
	}
	return 0;
 }
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

