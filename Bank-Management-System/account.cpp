#include <iostream>
#include <string>
using namespace std;

class Account{
	public:
		Account(string acc_num , double init_balance){
			account_number=acc_num;
			balance=init_balance;
		}
		//��� 
		void deposit(double amount){
			balance+=amount;
		}
		//ȡ�� 
		void withdraw(double amount){
			if(amount>balance){
				cout<<"Error:���㣬��ǰ��"<<balance<<endl; 
			}
			else{
				balance-=amount;
				cout<<"ȡ��ɹ�����ǰ��"<<balance<<endl; 
			}
		}
		private:
			string account_number;
			double balance;
};
int main(){
	Account my_acc("622202123456",1000.0);
	my_acc.deposit(500);
	my_acc.withdraw(2000);//Ӧ����������ʾ
	return 0; 
}
