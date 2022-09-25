#include<iostream>
#include<conio.h>
using namespace std;
class node
{
	private:
		int data,item;
		node *root,*left,*right;
		public:
			node()
			{
				root=NULL;
				left=NULL;
					right=NULL;
					data=0;
			}
			void insert(int item)
			{
				node *temp,*ptr;
				if(root==NULL)
				{
					temp=new node;
					temp->data=item;
					temp->right=NULL;
					temp->left=NULL;
					root=temp;
				}
				else
				{
				ptr=root;
				while(ptr!=NULL)
				{ 
				if(item<ptr->data)
				{
					if(ptr->left==NULL)
					{
						temp=new node;
						temp->data=item;
						temp->left=NULL;
						temp->right=NULL;					
						ptr->left=temp;
						temp=ptr->left;
						break;
					}
					else
					ptr=ptr->left;
				}
				else
				if(item>=ptr->data)
				{
					if(ptr->right==NULL)
					{
						temp=new node;
							temp->data=item;
							temp->left=NULL;
						temp->right=NULL;						
						ptr->right=temp;
						temp=ptr;
						break;
						
					}
					else 
					ptr=ptr->right;
				}
			}
			 } 
			 }
			 	void find(node *loc,node *par)
	{
		int item;
		node *ptr,*save;
		cout<<"\n enter the item";
		cin>>item;
		if(root==NULL)
		{
		loc=NULL;
		par=NULL;
		exit;
	}
	if(item==root->data)
	{
		loc=root;
		par=NULL;
		exit;
	}
	if(item<root->data)
	{
		ptr=root->left;
		save=root;
	}
	else
	ptr=root->right;
	save=root;
	while(ptr!=NULL)
	{
		if(item==ptr->data)
		{
			loc=ptr;
			par=save;
			exit;
		}
		if(item<ptr->data)
		{
			save=ptr;
			ptr=ptr->left;
		}
		else
		{
		
		save=ptr;
		ptr=ptr->right;
	}
	
	}
	
	loc=NULL;
	par=save;
     
	}
		
		void casea(int data,node *left,node *right,node *root,node *loc,node *par)
		{
			node *child;
			find(loc,par);
			if(loc->left==NULL&&loc->right==NULL)
			child=NULL;
			else if(loc->left!=NULL)
			child=loc->left;
			else
			child=loc->right;
			if(par!=NULL)
			{
				if(loc==par->left)
				par->left=child;
				else
				par->right=child;
			}
			else
			root=child;
			
		}
		void caseb(int data,node *left,node *right,node *root,node *loc,node *par)
		{
			node *suc,*parsuc,*ptr1,*save;
			ptr1=loc->right;
			save=loc;
			while(ptr1!=NULL)
			{
				save=ptr1;
				ptr1=ptr1->left;
			}
			casea(data,left,right,root,suc,parsuc);
			if(par!=NULL)
			{
				if(loc==par->left)
				par->left=suc;
				else
				par->right=suc;
			}
			else
			root=suc;
			suc->left==loc->left;
			suc->right=loc->right;
		}
		
		void del(int item)
		{
			node *loc,*par,*avail;
			find(loc,par);
			if(loc==NULL)
			{
			cout<<"\n item not found in tree\n";
			exit;
		}
		if(loc->right!=NULL&&loc->left!=NULL)
		casea(data,left,right,root,loc,par);
		else
		caseb(data,left,right,root,loc,par);
		loc->left=avail;
		avail=loc;
		cout<<"\n the deleted node value ="<<avail->data;
		
		}
void preorder(node *root)
{
	if(root!=NULL)
	{
		cout<<"\n data="<<root->data;
		preorder(root->left);
		preorder(root->right);
		
	}
}
void show()
{
	preorder(root);
}
};
int main()
{
	node n;
	n.insert(10);
	n.insert(20);
	n.insert(30);
	n.show();
	n.del(3);
	getch();
	
}
