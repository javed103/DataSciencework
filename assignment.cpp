#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class transport
{
	float weight;
	char capacity[20];
	float speed;
	public:
	void load()
	{
		cout<<"goods are loaded successfully";
	}
	void unload()
	{
		cout<<"goods are unloaded successfully";
	}
	virtual void ship()=0;
};
class land_transport:public transport
{
	char trns_mode[20];
	char vehicle_type[20];
	public:
		void ship()
	{
		cout<<"In land transport, shipping is done via Truck";
	}
};
class air_transport:public transport
{
	char aircraft_type[20];
	char airline_name[20];
	public:
    	void ship()
	{
		cout<<"In air transport, shipping is done via air cargo";
	}
};
int main()
{
	transport *ptr[20];
	int n=0;
	char choice;
	cout<<"do you want to transport your goods?(press Y for yes,& N for No) \n ****************************************";
	cin>>choice;
	if(choice=='Y' || choice=='y')
	do
	{
		cout<<"\n press L or l to use land transport service ";
		cout<<"\n press A or a to use sir transport service \n ***********************************";
		cin>>choice;
		if(choice=='L'|| choice=='l')
		ptr[n]=new land_transport;
		if(choice=='A'|| choice=='a')
		ptr[n]=new air_transport;
		ptr[n++]->ship();
		cout<<"\n do you want to transport your goods?(press Y for yes,& N for No)";
		cin>>choice;
	}while(choice=='Y'|| choice=='y');
	cout<<"thank you for using program";
	getch();
}

