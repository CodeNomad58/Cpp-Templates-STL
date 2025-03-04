#include <iostream>
#include <string>
using namespace std;

class Account{
	public:
		Account(string acc_num , double init_balance){
			account_number=acc_num;
			balance=init_balance;
		}
		//存款 
		void deposit(double amount){
			balance+=amount;
		}
		//取款 
		void withdraw(double amount){
			if(amount>balance){
				cout<<"Error:余额不足，当前余额："<<balance<<endl; 
			}
			else{
				balance-=amount;
				cout<<"取款成功！当前余额："<<balance<<endl; 
			}
		}
		private:
			string account_number;
			double balance;
};
int main(){
	Account my_acc("622202123456",1000.0);
	my_acc.deposit(500);
	my_acc.withdraw(2000);//应触发错误提示
	return 0; 
}
