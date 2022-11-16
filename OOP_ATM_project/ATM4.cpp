#include "ATM.h"
#include <iostream>
using namespace std;

ATM::ATM(int serial_num, int cash, Bank* mybank, bool bilang) {
	serial_number = serial_num;
	atm_cash = cash;
	primary_bank = mybank;
	//history = new Transaction()	
}

void ATMMU::checkPW(string accNum)
{
	string PW = this->primary_bank->getAccPW(accNum);
	if (PW == inputPW)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void ATMMB::checkPW(string accNum)
{
	string PW = this->primary_bank->getAccPW(accNum);
	if (PW == inputPW)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void ATMSU::checkPW(string accNum)
{
	string PW = this->primary_bank->getAccPW(accNum);
	if (PW == inputPW)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void ATMSB::checkPW(string accNum)
{
	string PW = this->primary_bank->getAccPW(accNum);
	if (PW == inputPW)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void ATMSB::choose_language()
{
	if (isBilang == false)
	{
		cout << "Multi-language property is not supported" << endl;
		return;
	}
	int lang;
	cout << "Choose Language\n1.\tEnglish\n2.\tKorean" << endl;
	cin >> lang;
	if (lang == 1)
	{
		this->isEnglish = true;
	}
	else if (lang == 2)
	{
		this->isEnglish = false;
	}
	else
	{
		cout << "Wrong Input" << endl;
		this->choose_language();
	}
}

void ATMMB::choose_language()
{
	if (isBilang == false)
	{
		cout << "Multi-language property is not supported" << endl;
		return;
	}
	int lang;
	cout << "Choose Language\n1.\tEnglish\n2.\tKorean" << endl;
	cin >> lang;
	if (lang == 1)
	{
		this->isEnglish = true;
	}
	else if (lang == 2)
	{
		this->isEnglish = false;
	}
	else
	{
		cout << "Wrong Input" << endl;
		this->choose_language();
	}
}

