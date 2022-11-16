#include "ATM.h"
#include <iostream>
using namespace std;

#define paperCashLimit	50
#define paperCheckLimit 30

Bank* ATM::findBank(string bankName)
{
	for(int i=0; i < numOfBanks; i++)
	{
		if (bankName == All_Banks[i]->getBankName())
		{
			return All_Banks[i];
		}
	}
}

void ATMSB::deposit(string accNum)
{
	bool isCash;
	string acc = accNum;
	isCash = display->cashCheck();
	if (isCash)
	{
		Cash* don;
		don = display->getCash();
		if (don->getTotal() > cashLimit) {cout << "Error" << endl;}
		if (don->getPaperNum() > paperCashLimit) { cout << "Error" << endl; }
		primary_bank->getAcc(accNum)->edit_acc_fund(don->getAmount());
		history[hisIndex] = new Log((serial_number + hisIndex), acc, don->getAmount(), 1);
		this->atm_cash += don->getAmount();
	}
	else
	{
		Check* supyo;
		supyo = display->getCheck();
		if (supyo->amount > checkLimit) {cout << "Error" << endl;}
		primary_bank->getAcc(accNum)->edit_acc_fund(supyo->amount);
		history[hisIndex] = new Log((serial_number + hisIndex), acc, supyo->amount, 1);
	}
}

void ATMMB::deposit(string accNum)
{
	bool isCash;
	string acc = accNum;
	isCash = display->cashCheck();
	if (isCash)
	{
		Cash* don;
		don = display->getCash();
		if (don->getTotal() > cashLimit) { cout << "Error" << endl; }
		if (don->getPaperNum() > paperCashLimit) { cout << "Error" << endl; }
		primary_bank->getAcc(accNum)->edit_acc_fund(don->getAmount());
		history[hisIndex] = new Log((serial_number + hisIndex), acc, don->getAmount(), 1);
		this->atm_cash += don->getAmount();
	}
	else
	{
		Check* supyo;
		supyo = display->getCheck();
		if (supyo->amount > checkLimit) { cout << "Error" << endl; }
		primary_bank->getAcc(accNum)->edit_acc_fund(supyo->amount);
		history[hisIndex] = new Log((serial_number + hisIndex), acc, supyo->amount, 1);
	}
}

void ATMSU::deposit(string accNum)
{
	bool isCash;
	string acc = accNum;
	isCash = display->cashCheck();
	if (isCash)
	{
		Cash* don;
		don = display->getCash();
		if (don->getTotal() > cashLimit) { cout << "Error" << endl; }
		if (don->getPaperNum() > paperCashLimit) { cout << "Error" << endl; }
		primary_bank->getAcc(accNum)->edit_acc_fund(don->getAmount());
		history[hisIndex] = new Log((serial_number + hisIndex), acc, don->getAmount(), 1);
		this->atm_cash += don->getAmount();
	}
	else
	{
		Check* supyo;
		supyo = display->getCheck();
		if (supyo->amount > checkLimit) { cout << "Error" << endl; }
		primary_bank->getAcc(accNum)->edit_acc_fund(supyo->amount);
		history[hisIndex] = new Log((serial_number + hisIndex), acc, supyo->amount, 1);
	}
}

void ATMMU::deposit(string accNum)
{
	bool isCash;
	string acc = accNum;
	isCash = display->cashCheck();
	if (isCash)
	{
		Cash* don;
		don = display->getCash();
		if (don->getTotal() > cashLimit) { cout << "Error" << endl; }
		if (don->getPaperNum() > paperCashLimit) { cout << "Error" << endl; }
		primary_bank->getAcc(accNum)->edit_acc_fund(don->getAmount());
		history[hisIndex] = new Log((serial_number + hisIndex), acc, don->getAmount(), 1);
		this->atm_cash += don->getAmount();
	}
	else
	{
		Check* supyo;
		supyo = display->getCheck();
		if (supyo->amount > checkLimit) { cout << "Error" << endl; }
		primary_bank->getAcc(accNum)->edit_acc_fund(supyo->amount);
		history[hisIndex] = new Log((serial_number + hisIndex), acc, supyo->amount, 1);
	}
}

void ATMSB::withdrawal(string accNum)
{
	Bank* targetBank{ findBank(accNum) };
	int amount;
	cout << "Amount to deposit?\n:" << endl;
	cin >> amount;

}

void ATMMB::withdrawal(string accNum)
{

}

void ATMSU::withdrawal(string accNum)
{

}

void ATMMU::withdrawal(string accNum)
{

}