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
		if(book[t]==0)   //桌子上没有这一张牌 
		{
			q1.head++;//这一张牌出队 
			s.top++;//桌子上的栈加上一 
			s.data[s.top]=t;//将这一个栈填上这一张牌 
			book[t]=1;//将这一张牌计数 
		}
		else//桌子上有这一张牌可以赢牌 
		{
			q1.head++;//这一张牌出队 
			q1.data[q1.tail]=t;//在队尾拿回这一张牌 
			q1.tail++;//往后挫一张 
			while(s.data[s.top]!=t)  //将在桌子上的中间的全部加入自己的队尾 
			{
				book[s.data[s.top]]=0;//先清零 
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
			cout<<"小哼Win"<<endl;
			cout<<"小哼手中的牌是：";
			for(i=q1.head;i<=q1.tail-1;i++)
			{
				cout<<q1.data[i]<<" "; 
			}
			if(s.top>0)
			{
				cout<<"桌子上的牌是：";
				for(i=1;i<=s.top;i++)
				{
					cout<<s.data[i]<<" ";
				 } 
			}
			else cout<<"桌子上没有牌了。"<<endl; 
		}
		else
		{
			cout<<"小哈Win"<<endl;
			cout<<"小哈手中的牌是 ";
			for(i=q2.head;i<=q2.tail-1;i++)
			{
				cout<<q2.data[i]<<" "; 
			 } 
			if(s.top>0)
			{
				cout<<"桌子上的牌是：";
				for(i=1;i<=s.top;i++)
				{
					cout<<s.data[i]<<" ";
				 } 
			}
			else cout<<"桌子上没有牌了。"<<endl; 
			
		}	
	return 0;
 } 
