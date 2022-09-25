
#include<iostream>
#include<conio.h>
using namespace std;
class echelon
{
	private:
		int a[3][3];
		int m;
		int b,c,d;
		public:
			echelon()
			{
				m=0;
				b=0;
				c=0;
				d=0;
			}
			void get()
			{
				cout<<"enter the values";
				for(int i=0;i<3;i++)
				for(int j=0;j<3;j++)
				{
					cin>>a[i][j];
				}
				}
			void calcu()
			{
					for(int i=0;i<3;i++)
					{
				for(int j=0;j<3;j++)
				{
					if(a[i][j]==0)
					{
						if(a[i][j+1]!=1)
						m++;
						break;
					}
				}
			}
					for(int i=0;i<3;i++)
					{
					
				for(int j=0;j<1;j++)
				{
					if(a[i][j]>0)
					break;
					else
					if(a[i][j]==0)
					b++;
				}
			}
				for(int i=1;i<2;i++)
				{
				for(int j=0;j<3;j++)
			{
					if(a[i][j]>0)
					break;
					else
					if(a[i][j]==0)
					c++;
				}
			}
			for(int i=2;i<3;i++)
			{
				for(int j=0;j<3;j++)
				{
						if(a[i][j]>0)
					break;
					else
					if(a[i][j]==0)
					d++;
				}
			}
			if(m=0&&b<c<d)
			cout<<"/n matris is in echelon form";
			else
				cout<<"/n matris is not in echelon form";
				
}
};
int main()
{
	
	echelon ob;
	ob.get();
	ob.calcu();
	getch();
}

