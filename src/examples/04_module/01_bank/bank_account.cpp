//bank_account.cpp
#include "bank_account.h"

void BankAccount::deposit(int amount) 
{
	if (amount > 0) 
	{
		balance += amount;
	}
	else 
	{
		//usually write to a file
		throw InvalidAmount("\nAmount must be greater than 0.\n");
	}
}

void BankAccount::withdraw(int amount) 
{
	if (amount <= 0)  
	{
		throw InvalidAmount("\nAmount must be greater than 0.\n");
	}
	else if(balance - amount < 0)
	{
		throw InvalidAmount("\n Insufficient funds \n");                           
	}
	else 
	{
		balance -= amount;
	}
}

void BankAccount::open(int amount)
{
	if (balance > 0) 
	{
		throw InvalidAmount("Account already open, use deposit..");
	}

	if (amount >= min_balance_to_open) 
	{
		balance += amount;
	}
	else 
	{
		throw InvalidAmount("A deposit of at least 25....");
	}
}
