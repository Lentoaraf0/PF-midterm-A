#include<iostream>
using namespace std;
main(){
	int choice,balance,amount;
	balance = 0;
	do {
	cout<<"***MENU***"<<endl;
	cout<<"1. Check balance"<<endl;
	cout<<"2. Deposit Money"<<endl;
	cout<<"3. Withdraw Money"<<endl;
	cout<<"4. Exit"<<endl;
	cin>>choice;
	switch(choice){
		case 1:
			cout<<"Your current balance is "<<balance<<endl;
		break;
		case 2:
			cout<<"Enter Deposit Amount:$ ";
			cin>>amount;
			if(amount>0){
			balance=balance + amount;
			cout<<"Your Balance has been Updated"<<endl;
			}else{
				cout<<"PLease Input a valid Deposit"<<endl;
			}
		break;
		case 3:
			cout<<"Enter Withdraw Amount:$ ";
			cin>>amount;
			if (amount <= balance){
				balance = balance - amount;
				cout<<"Your balance has been Updated"<<endl;
			}else{
				cout<<"ERROR: Infucient Balance"<<endl;
			}
		break;
		case 4:
			cout<<"Thank For Using our ATM, GOOD BYE!"<<endl;
		break;
		default:
			cout<<"PLease Input Integer between 1 to 4"<<endl;
		break;
		}
	}while(choice!=4);
	return 0;
}
