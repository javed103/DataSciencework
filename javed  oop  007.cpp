#include<iostream>
#include<conio.h>
using namespace std;
    class comsat
    {
    	protected:
    
             char adrss[24];
             int cell;
             char quli[12];
             int exp;
             char aoi[23];
             char cor[12];
             char teach[34];
             int doj;
             int dob;
             int salre;
             int rac;
             public:
             		 comsat()
	{
		strcpy(adrss," ");
		strcpy(quli," ");
		strcpy(aoi," ");
		strcpy(cor_teach," ");
		dob=0;
		exp=0;
		doj=0;
		salre=0;
		rac=0;
		cell=0;
	}
	comsat(char adr[],char qulifctn[],char r_intrst[],char c_tchng[],int birth,int exprnc,int dte_joing,int slery,int rom_alct,int cll)
	{
		strcpy(adrss,adr);
	
		strcpy(quli,qulifctn);
		strcpy(aoi,r_intrst);
		strcpy(teach,c_tchng);
		dob=birth;
		exp=exprnc;
		doj=dte_joing;
	salre	=slery;
		rac=rom_alct;
		cell=cll;
	}
             	void get()
             	{
             	cout<<"entre the dete of birth adress and cell no";
				 cin>>dob>>adrss>>cell;
				 cout<<"entre the qulication experince and area of interest";
				 cin>>quli>>exp>>aoi;
				 cout<<"entre the date of joing salre room allocated";
				 cin>>doj>>salre>>rac;
				 }
				 void show()
				 {
				 	cout<<"the date of birth adress and cell no is ="<<dob<<adrss<<cell;
				 	cout<<"the qulication area of intrest and exprince is ="<<quli<<exp<<aoi;
				 	cout<<"the date of joing sallre and room allocated is ="<<doj<<salre<<rac;
				 }
			};
				 class permant:public comsat
				 { 
				 protected: 
				 char permt[23];
				 public:
				 	void get()
				 	{
				 	comsat::get();
				 		cout<<"enter the data for permanent";
		          cin>>permt;
                   	}
				 	
					 void show()
					 {
					 comsat::show();
					cout<<"the data for permanent is"<<permt<<endl;
                        	}
				 		 }
				 class lab Engineer:public comsat
				 {
				 protected:
				 	char lab e[30];
				 	public:
				viod get()
				{
				comsat::get();
				cout<<"enter the data for lab_Engineer ";
	           	cin>>lab E;	
               	}
	              viod show()
	                    {
	                  	comsat::show();
				 		cout<<"the data for lab Engineer is"<<lab E<<endl;
                    	}	
				 	
				 };
				 class research_associates :public comsat
				 {
				 	protected:
				 	char rechrch[50];
				 	public:
					void get()
					{
				 			
					comsat::get();
	    			cout<<"enter the data for research associates ";
	               	cin>>rechrch;	
                 	}
                	void show()
                  	{
	
				 	comsat::show();
				   	cout<<"the data for research_associates is"<<rechrch<<endl;
                       	}  		
				 			
				 };
				 class vis_lecturer :public comsat
				 {
				 	protected:
				 	char Vit_lectr[50];
				 	public:
					void get()
					{
					comsat::get();
					cout<<"enter the data for visiting lecturer ";
	               	cin>>Vit_lectr;	
                     	}
                  	viod show()
                       	{
                  	comsat::show();
 	          		cout<<"the data for visiting lecturer"<<Vit_lectr<<endl;
              	}      
		  		 };
		         class accountnt:public comsat
		   	 {
		  	 	protected:
		    	char Accunt[50];   
				public:
			void get()
	       	{
	    	comsat::get();
			cout<<"enter the data for accountant";
	    	cin>>Accunt;	
             	}
	           void show()
	           {
	           	comsat::show();
		    	cout<<"the data for accountant"<<Accunt<<endl;
                     	}	
				 	 };
				 class librain:public comsat
				 {
				protected:
				char Librin[50];
				public:
				void get()
				{
				comsat::get();
			cout<<"enter the data for librarian";
	        	cin>>Librin;	
                  	}	
	              void show()
				  {
	              	comsat::show();
					cout<<"the data for librarian"<<Librin<<endl;
                      	}	
				 	};
				 class coordenater:public comsat
				 {
				 	protected:
					char cordntr[50];
					public:
					void get()
					{
				 	comsat::get();
					cout<<"enter the data for coordinator";
	              	cin>>cordntr;
	                	}
		               void show()
					   {
					   	comsat::show();
				 	cout<<"the data for coordinator"<<cordntr<<endl;
                   	}		
				 	};
				 class directr:public comsat
				 {
				protected:
				char dirt[50]
				public:
				void get()
				{
				comsat::get();
			cout<<"enter the data for director";
	         	cin>>dirt;	
                   	}
				 		void show()	
						 {
						 	comsat::show();
				 			cout<<"the data for director"<<dirt<<endl;
                     	}                        	
				 		 };
				 int main()
				 {
				 	 permant p;
				 	 lab Engineer lg;
		 research_associates ra;
			    vis_lecturer vl;	 
                   accountnt ac;
                	 librain lb;
                  coordenater co;
                	directr   dr;
                	
      cout<<"enter the data for 1 faculty \n and 2 administrator";
    int d;
    cin>>d;
    if(d==1)
    {
    	cout<<"enter the data 1 for permanent \n and 2 for Visiting Faculty \n and 3 for Research Associates \n and 4 for Lab Engineer";
		int e;
		cin>>e;
		if(e==1)
		p.get_data();
		else if(e==2)
		vl.get_data();
		else if(e==3)
		ra.get_data();
		else if(e==4)
		lg.get_data();
		else
		cout<<"javed amin";
    }
    else if(d==2)
    {
    	cout<<"enetr the data for admistrator";
    	cout<<"1 for accountent \n 2 for laibrarain \n 3 for coordinator \n 4 for Director"; 
    	int f;
    	cin>>f;
    	if(f==1)
    	ac.get_data();
    	else if(f==2)
    	lb.get_data();
    	else if(f==3)
    	co.get_data();
    	else if(f==4)
    	dr.get_data();
    	else
    	cout<<"pakistan";
    } 
 
    cout<<"enter 1 for faculty data and 2 for administer data";
    int a;
    cin>>a;
    if(a==1)
    {
    	cout<<"enter 1 for permanent and 2 for lab_engineer and 3 for research_associates and 4 for visiting_lecturer";
    	int b;
    	cin>>b;
    	if(b==1)
    	p.show_data();
    	else if(b==2)
    	lg.show_data();
    	else if(b==3)
    	ra.show_data();
    	else if(b==4)
    	vl.show_data();
    	else
    	cout<<"you do not follow the instruction";
    }
    else
    if(a==2)
    {
    	cout<<"enter 1 for accountent and press 2 for librarain and 3 for coordinator and 4 for Diector";
    	int c;
    	cin>>c;
    		if(c==1)
    	ac.show_data();
    	else if(c==2)
    	lb.show_data();
    	else if(c==3)
    	co.show_data();
    	else if(c==4)
    	dr.show_data();
    	else
    	cout<<"you do not follow the instruction";
    }
    else
    cout<<"you no not fallow the instruction over all";
    getch();
    }

                	 
