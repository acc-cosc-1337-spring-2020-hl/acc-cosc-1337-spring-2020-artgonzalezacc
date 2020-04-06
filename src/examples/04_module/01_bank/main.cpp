#include "checking_account.h"
#include "savings_account.h"
#include<iostream>
#include<vector>
#include<memory>

using std::cout; using std::vector;
using std::unique_ptr; using std::make_unique;

int main()
{   //C++ 98
	BankAccount* z = new BankAccount(100);
	//more code here use z object
	delete z;

	//c++ 11
	//declare uniqueptr           create the instance w make unique
	unique_ptr<BankAccount> s = make_unique<SavingsAccount>(100);
	unique_ptr<BankAccount> c = make_unique<CheckingAccount>(100);
	
	vector<unique_ptr<BankAccount>> acts;// {std::move(s), std::move(c)};
	acts.push_back(std::move(s));
	acts.push_back(std::move(c));
	
	for (auto &account : acts) 
	{
		cout << account->get_balance() << "\n";
	}

	// TODO Can't use unique ptr list initializer
	// TODO how does vector steal references
    
	return 0;
}