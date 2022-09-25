#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
const int max=80;
class comsats
{
	protected:
	 char adr[59];
	 char qfctn[50];
	 char ara_in[50];
	 char crs_tchg[50];
	 int d_of_b;
	 int exp;
	 int doj;
	 int srly;
	 int r_ld;
	 int ph;
	 public:
	 comsats()
	{
		strcpy(adr," ");
		strcpy(qfctn," ");
		strcpy(ara_in," ");
		strcpy(crs_tchg," ");
		d_of_b=0;
		exp=0;
		doj=0;
		srly=0;
		r_ld=0;
		ph=0;
	}
	comsats(char adrs[],char qulifctn[],char r_intrst[],char c_tchng[],int birth,int exprnc,int dte_joing,int slery,int rom_alct,int phn)
	{
		strcpy(adr,adrs);
	
		strcpy(qfctn,qulifctn);
		strcpy(ara_in,r_intrst);
		strcpy(crs_tchg,c_tchng);
		d_of_b=birth;
		exp=exprnc;
		doj=dte_joing;
		srly=slery;
		r_ld=rom_alct;
		ph=phn;
	}
	void personal_imformation()
	{
		//cout<<"enter the name";
		//cin>>nam;
		cout<<"enter the date of birth";
		cin>>d_of_b;
		cout<<"enter the adress";
		cin>>adr;
		cout<<"enter the phone number";
		cin>>ph;
	}
	void Academic_information()
	{
		cout<<"enter the qulificatin";
		cin>>qfctn;
		cout<<"enter the experience";
		cin>>exp;
		cout<<"enter the course of teaching";
		cin>>crs_tchg;
		cout<<"enter the area of interesting";
		cin>>ara_in;
	}
	void Managerial_information()
	{
		cout<<"enter the date of joinging";
		cin>>doj;
		cout<<"enter the salary";
		cin>>srly;
		cout<<"enter the room allocated";
		cin>>r_ld;
	} 
	void personal_imformation_show()
	{
		//cout<<"the name is"<<nam<<endl;
		cout<<"the date of birth is"<<d_of_b<<endl;
		cout<<"the adress is"<<adr<<endl;
		cout<<"the phone number is"<<ph<<endl;
	}
	void Academic_information_show()
	{
		cout<<"the qulificatin is"<<qfctn<<endl;
		cout<<"the experience is"<<exp<<endl;
		cout<<"the course of teching is"<<crs_tchg;
		cout<<"the area of interesting is"<<ara_in<<endl;
	}
	void Managerial_information_show()
	{
		cout<<"the date of joing is"<<doj<<endl;
		cout<<"the salary is"<<srly<<endl;
		cout<<"the room allocated is"<<r_ld<<endl;
	}
};
class permanent:public comsats
{
	protected:
	char N_prmnt[50];
	public:
		permanent():comsats()
		{
			strcpy(N_prmnt," ");
		}
		permanent(char ar[],char adrs[],char qulifctn[],char r_intrst[],char c_tchng[],int birth,int exprnc,int dte_joing,int slery,int rom_alct,int phn):comsats( adrs, qulifctn, r_intrst, c_tchng, birth, exprnc, dte_joing,slery, rom_alct, phn)
{
	strcpy(N_prmnt,ar);
}
	void get_data()
	{
		comsats::personal_imformation();
		comsats::Academic_information();
		comsats::Managerial_information();
		cout<<"enter the data for permanent";
		cin>>N_prmnt;
	}
	void show_data()
	{
		comsats::personal_imformation_show();
		comsats::Academic_information_show();
		comsats::Managerial_information_show();
		cout<<"the data for permanent is"<<N_prmnt<<endl;
	}
};
class lab_engineer:public comsats
{
	protected:
	char Lb_data[50];
	public:
		lab_engineer():comsats()
		{
			strcpy(Lb_data," ");
		}
		lab_engineer(char arr[],char adrs[],char qulifctn[],char r_intrst[],char c_tchng[],int birth,int exprnc,int dte_joing,int slery,int rom_alct,int phn):comsats( adrs, qulifctn, r_intrst, c_tchng, birth, exprnc, dte_joing, slery, rom_alct, phn)
{
	strcpy(Lb_data,arr);
}
	void get_data()
	{
		comsats::personal_imformation();
		comsats::Academic_information();
		comsats::Managerial_information();
		cout<<"enter the data for Lab_Engineer ";
		cin>>Lb_data;	
	}
	void show_data()
	{
		comsats::personal_imformation_show();
		comsats::Academic_information_show();
		comsats::Managerial_information_show();
		cout<<"the data for lab Engineer is"<<Lb_data<<endl;
	}
};
class research_associates:public comsats
{
	protected:
	char rch_a_data[50];
	public:
    research_associates():comsats()
	{
		strcpy(rch_a_data," ");
	}
	research_associates(char a[],char adrs[],char qulifctn[],char r_intrst[],char c_tchng[],int birth,int exprnc,int dte_joing,int slery,int rom_alct,int phn):comsats( adrs, qulifctn, r_intrst, c_tchng, birth, exprnc, dte_joing, slery, rom_alct, phn)
{
	strcpy(rch_a_data,a);
}
	void get_data()
	{
		comsats::personal_imformation();
		comsats::Academic_information();
		comsats::Managerial_information();
		cout<<"enter the data for research associates ";
		cin>>rch_a_data;	
	}
	void show_data()
	{
		comsats::personal_imformation_show();
		comsats::Academic_information_show();
		comsats::Managerial_information_show();
		cout<<"the data for research_associates is"<<rch_a_data<<endl;
	}
};
class visiting_lecturer:public comsats
{
	protected:
	char Vst_lctr_data[50];
	public:
	visiting_lecturer():comsats()
	{
		strcpy(Vst_lctr_data," ");
	}	
	visiting_lecturer(char arrr[],char adrs[],char qulifctn[],char r_intrst[],char c_tchng[],int birth,int exprnc,int dte_joing,int slery,int rom_alct,int phn):comsats( adrs, qulifctn, r_intrst, c_tchng, birth, exprnc, dte_joing, slery, rom_alct, phn)
	{
		strcpy(Vst_lctr_data,arrr);
	}
	void get_data()
	{
		comsats::personal_imformation();
		comsats::Academic_information();
		comsats::Managerial_information();
		cout<<"enter the data for visiting lecturer ";
		cin>>Vst_lctr_data;	
	}
	void show_data()
	{
		comsats::personal_imformation_show();
		comsats::Academic_information_show();
		comsats::Managerial_information_show();
		cout<<"the data for visiting lecturer"<<Vst_lctr_data<<endl;
	}
};
class accountant:public comsats
{
	protected:
	char Acc_data[50];
	public:
	accountant():comsats()
	{
		strcpy(Acc_data," ");
	}	
	accountant(char aa[],char adrs[],char qulifctn[],char r_intrst[],char c_tchng[],int birth,int exprnc,int dte_joing,int slery,int rom_alct,int phn):comsats( adrs, qulifctn,r_intrst, c_tchng, birth,exprnc,dte_joing, slery, rom_alct, phn)
	{
		strcpy(Acc_data,aa);
	}
	void get_data()
	{
		comsats::personal_imformation();
		comsats::Academic_information();
		comsats::Managerial_information();
		cout<<"enter the data for accountant";
		cin>>Acc_data;	
	}
	void show_data()
	{
		comsats::personal_imformation_show();
		comsats::Academic_information_show();
		comsats::Managerial_information_show();
		cout<<"the data for accountant"<<Acc_data<<endl;
	}
};
class librarian:public comsats
{
	protected:
	char Lbrn_data[50];
	public:
	librarian():comsats()
	{
		strcpy(Lbrn_data," ");
	}	
	librarian(char aaa[],char adrs[],char qulifctn[],char r_intrst[],char c_tchng[],int birth,int exprnc,int dte_joing,int slery,int rom_alct,int phn):comsats(adrs,qulifctn, r_intrst,c_tchng,birth,exprnc,dte_joing,slery,rom_alct, phn)
	{
		strcpy(Lbrn_data,aaa);
	}
	void get_data()
	{
		comsats::personal_imformation();
		comsats::Academic_information();
		comsats::Managerial_information();
		cout<<"enter the data for librarian";
		cin>>Lbrn_data;	
	}
	void show_data()
	{
		comsats::personal_imformation_show();
		comsats::Academic_information_show();
		comsats::Managerial_information_show();
		cout<<"the data for librarian"<<Lbrn_data<<endl;
	}
};
class coordinator:public comsats
{
	protected:
	char codntr_data[50];
	public:
		coordinator():comsats()
		{
			strcpy(codntr_data," ");
		}
		coordinator(char ab[],char adrs[],char qulifctn[],char r_intrst[],char c_tchng[],int birth,int exprnc,int dte_joing,int slery,int rom_alct,int phn):comsats( adrs,qulifctn,r_intrst,c_tchng,birth,exprnc,dte_joing,slery,rom_alct, phn)
		{
			strcpy(codntr_data,ab);
		}
	void get_data()
	{
		comsats::personal_imformation();
		comsats::Academic_information();
		comsats::Managerial_information();
		cout<<"enter the data for coordinator";
		cin>>codntr_data;	
	}
	void show_data()
	{
		comsats::personal_imformation_show();
		comsats::Academic_information_show();
		comsats::Managerial_information_show();
		cout<<"the data for coordinator"<<codntr_data<<endl;
	}
};
class director:public comsats
{
	protected:
	char dictr_data[50];
	public:
		director():comsats()
		{
	strcpy(dictr_data," ");		
		}
		director(char ac[],char adrs[],char qulifctn[],char r_intrst[],char c_tchng[],int birth,int exprnc,int dte_joing,int slery,int rom_alct,int phn):comsats( adrs,qulifctn,r_intrst,c_tchng,birth,exprnc,dte_joing,slery,rom_alct, phn)
		{
			strcpy(dictr_data,ac);
		}
	void get_data()
	{
		comsats::personal_imformation();
		comsats::Academic_information();
		comsats::Managerial_information();
		cout<<"enter the data for director";
		cin>>dictr_data;	
	}
	void show_data()
	{
		comsats::personal_imformation_show();
		comsats::Academic_information_show();
		comsats::Managerial_information_show();
		cout<<"the data for director"<<dictr_data<<endl;
	}
};
int main()
{
	permanent obp;
	lab_engineer obl;
    research_associates obr;
    visiting_lecturer obv;
    accountant oba;
    librarian oblr;
    coordinator obc;
    director obd;
   
    cout<<"enter the data for 1 faculty \n and 2 administrator";
    int d;
    cin>>d;
    if(d==1)
    {
    	cout<<"enter the data 1 for permanent \n and 2 for Visiting Faculty \n and 3 for Research Associates \n and 4 for Lab Engineer";
		int e;
		cin>>e;
		if(e==1)
		obp.get_data();
		else if(e==2)
		obv.get_data();
		else if(e==3)
		obr.get_data();
		else if(e==4)
		obl.get_data();
		else
		cout<<"shing pong";
    }
    else if(d==2)
    {
    	cout<<"enetr the data for admistrator";
    	cout<<"1 for accountent \n 2 for laibrarain \n 3 for coordinator \n 4 for Director"; 
    	int f;
    	cin>>f;
    	if(f==1)
    	oba.get_data();
    	else if(f==2)
    	oblr.get_data();
    	else if(f==3)
    	obc.get_data();
    	else if(f==4)
    	obd.get_data();
    	else
    	cout<<"you did not follow the instructions";
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
    	obp.show_data();
    	else if(b==2)
    	obl.show_data();
    	else if(b==3)
    	obr.show_data();
    	else if(b==4)
    	obv.show_data();
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
    	oba.show_data();
    	else if(c==2)
    	oblr.show_data();
    	else if(c==3)
    	obc.show_data();
    	else if(c==4)
    	obd.show_data();
    	else
    	cout<<"you do not follow the instruction";
    }
    else
    cout<<"you no not fallow the instruction over all";
    getch();
    }

