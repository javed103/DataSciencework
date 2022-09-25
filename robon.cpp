#include<iostream>
#include<conio.h>
using namespace std;
class node
{
	private:
		int info,time;
		node *link;
		node *start,*ptr;
		int item,a,sub;
	public:
	node *h;
	node()
		{
			info=0;
			h=NULL;
		}
		void insert()
		{
			cout<<"\n enter the number that you want to total no nodes\n";
			cin>>a;
			node*temp,*t;
			for(int i=1;i<=a;i++)
			{
			cout<<"\n enter the value in node";
			cin>>item;
			if(h==NULL)
			{
				h=new node;
				h->info=item;
				h->link=NULL;
			}
			else
			{
				temp=h;
				while(temp->link!=NULL)
			{
				temp=temp->link;
			}
			t=new node;
			t->info=item;
			t->link=NULL;
			temp->link=t;
			temp=h;
		}
		}
	}
	void robon()
	{
		cout<<"\n enter the time slice\n";
		cin>>time;
		node *ptr,*p;
		ptr=h;
		for(int j=1;j<=a;j++)
		{
			sub=(ptr->info)-time;
			if(sub<=0)
			{
				cout<<"\n the subtraction of data on node node and time is= "<<sub<<"\n the deleted node value is= "<<ptr->info;
				h=ptr->link;
			}
			else 
			if(sub>0)
			{
				node *pt,*t;
			cout<<"\n the subtraction of data on node node and time is= "<<sub<<"\n the deleted node value is= "<<ptr->info;
				h=ptr->link;
				p=ptr;
				while(ptr!=NULL)
				{
					ptr=ptr->link;
					}	
					t=new node;
					t->info=sub;
					t->link=NULL;
					pt->link=t;
					t=ptr;
			}
			ptr=p;
			ptr=ptr->link;
		}
	}
	void show()
	{
		node *temp;
		temp=h;
		cout<<"all the elements are : \n";
		while(temp!=NULL)
		{
			cout<<"Node=    "<<temp->info<<endl;
			temp=temp->link;
		}
	}
};
int main()
{
	node n;
	n.insert();
	cout<<"\n before working of the time slice the nodes are \n ";
	n.show();
	n.robon();
	cout<<"\n after working of the time slice the nodes are \n ";
	n.show();
	getch();
}
