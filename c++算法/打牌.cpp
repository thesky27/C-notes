#include<iostream>
using namespace std;
struct queue{
	int data[301];
	int head;
	int tail;
};
struct stack{
	int data[10];
	int top;
};
int main()
{
	queue q1,q2;
	stack s;s.top=0;
	q1.head=1;q1.tail=1;
	q2.head=1;q2.tail=1;
	int i,t,book[10];
	for(i=0;i<10;i++)
	{
		book[i]=0;
	}
    for(i=0;i<6;i++)
	{	cin>>q1.data[q1.tail];
		q1.tail++;
	}	
	for(i=0;i<6;i++)
	{	cin>>q2.data[q2.tail];
		q2.tail++;
	}
	while(q1.head<q1.tail&&q2.head<q2.tail)
	{
		t=q1.data[q1.head];  
		if(book[t]==0)   //������û����һ���� 
		{
			q1.head++;//��һ���Ƴ��� 
			s.top++;//�����ϵ�ջ����һ 
			s.data[s.top]=t;//����һ��ջ������һ���� 
			book[t]=1;//����һ���Ƽ��� 
		}
		else//����������һ���ƿ���Ӯ�� 
		{
			q1.head++;//��һ���Ƴ��� 
			q1.data[q1.tail]=t;//�ڶ�β�û���һ���� 
			q1.tail++;//�����һ�� 
			while(s.data[s.top]!=t)  //���������ϵ��м��ȫ�������Լ��Ķ�β 
			{
				book[s.data[s.top]]=0;//������ 
				q1.data[q1.tail]=s.data[s.top];// 
				q1.tail++;
				s.top--;	
			}
			book[s.data[s.top]]=0;
			q1.data[q1.tail]=s.data[s.top];
			q1.tail++;
			s.top--;	
		}
		if(q1.head==q1.tail)  break;
		t=q2.data[q2.head];
		if(book[t]==0)
		{
			q2.head++;
			s.top++;
			s.data[s.top]=t;
			book[t]=1;
		}
		else
		{
			q2.head++;
			q2.data[q2.tail]=t;
			q2.tail++;
			while(s.data[s.top]!=t)
			{
				book[s.data[s.top]]=0;
				q2.data[q2.tail]=s.data[s.top];
				q2.tail++;
				s.top--;	
			}
			book[s.data[s.top]]=0;
			q2.data[q2.tail]=s.data[s.top];
			q2.tail++;
			s.top--;	
		}
	
		
	}
		if(q2.head==q2.tail)
		{
			cout<<"С��Win"<<endl;
			cout<<"С�����е����ǣ�";
			for(i=q1.head;i<=q1.tail-1;i++)
			{
				cout<<q1.data[i]<<" "; 
			}
			if(s.top>0)
			{
				cout<<"�����ϵ����ǣ�";
				for(i=1;i<=s.top;i++)
				{
					cout<<s.data[i]<<" ";
				 } 
			}
			else cout<<"������û�����ˡ�"<<endl; 
		}
		else
		{
			cout<<"С��Win"<<endl;
			cout<<"С�����е����� ";
			for(i=q2.head;i<=q2.tail-1;i++)
			{
				cout<<q2.data[i]<<" "; 
			 } 
			if(s.top>0)
			{
				cout<<"�����ϵ����ǣ�";
				for(i=1;i<=s.top;i++)
				{
					cout<<s.data[i]<<" ";
				 } 
			}
			else cout<<"������û�����ˡ�"<<endl; 
			
		}	
	return 0;
 } 
