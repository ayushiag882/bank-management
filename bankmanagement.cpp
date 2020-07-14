#include<windows.h>
#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
class bank
{
	char name[100],add[100],y; int balance;
	public:
		void open_account();
		void deposite_money();
		void withdraw();
		void display();
		
};
  void bank::open_account(){
  	 
  	cout<<"ENTER YOUR FULL NAME"<<endl;
  	cin.ignore();
  	cin.getline(name,100);
  	cout<<"ENTER YOUR ADDRESS"<<endl;
    cin.ignore();
  	cin.getline(add,100);
  	cout<<"WHAT TYPE OF ACCOUNT YOU WANT TO OPEN SAVING(S) OR CURRENT(C)"<<endl;
  	cin>>y;
  	cout<<"ENTER AMOUNT FOR DEPOSITE"<<endl;
  	cin>>balance;
  	cout<<"YOUR ACCOUNT IS CREATED"<<endl;
  	
  	
  }
  void bank::deposite_money(){    
   int a;
   cout<<"ENTER HOW MUCH YOU DEPOSITE \n";
   cin>>a;
   balance+=a;
   cout<<"TOTAL AMOUNT YOU DEPOSITE:: \t"<<balance;
  }
  void bank::display(){
  	cout<<"YOUR FULL NAME :: \t"<< name;
  	cout<<"YOUR ADRESS :: \t"<<add;
  	cout<<"TYPE OF ACCOUNT THAT YOU OPEN ::\t"<<y;
  	cout<<"amount you deposite :: \t"<<balance;
  }
  void bank::withdraw(){
  	float amount;
  	cout<<"\n WITHDRAW ::";
  	 cout<<"AMOUNT TO BE WITHDRAWN :: \n";
  	 cin>>amount;
  	 balance-=amount;
  	 cout<<"TOTAL AMOUNT LEFT::"<<balance;
  	
  	
  }
		

int main()

{
	int ch,x;
	bank obj;
	do{
	
	cout<<"1. OPEN ACCOUNT"<<endl;
	cout<<"2. DEPOSITE MONEY"<<endl;
	cout<<"3. WITHDRAW MONEY"<<endl;
	cout<<"4. DISPLAY ACCOUNT"<<endl;
	cout<<"5. EXIT"<<endl;
	cout<<"select the option from above \n";
	cin>>ch;
	switch(ch)
	{
		case 1:
		     cout<<"1.OPEN ACCOUNT \n";
		obj.open_account();
		break;
		case 2:
		    cout<<"2.DEPOSITE MONEY \n";
		obj.deposite_money();
		break;
		case 3:
			cout<<"3.WITHDRAW MONEY \n";
			obj.withdraw();
			break;
		case 4:
		    cout<<"4.DISPLAY ACCOUNT   \n";
			obj.display();
			break;
		case 5:
			if(ch==5)
			{
				exit(1);
			}
		deafault :
			cout<<" INVALID VALUE!!! it do not exist try again please  \n";
		
	}
	cout<<"\n do you want to select next option  then press :: y \n";
	cout<<"if you want to exit then  press :: N";
	x=getch();
	if(x=='N' || x=='n')
	exit(0);
	
}
 while(x=='Y' || x=='y');
	
getch();
return 0;
}
