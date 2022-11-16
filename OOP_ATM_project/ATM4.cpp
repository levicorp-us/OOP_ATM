#include "ATM.h"
#include <stdlib.h>
#include <time.h>
#include <iostream>
using namespace std;

ATM::ATM(int init_cash, string mybank) {
	srand((unsigned int)NULL);
	serial_number = rand() % 1000000;
	atm_cash = init_cash;
	primary_bank = findBank(mybank);
	display = new Eng_InteractiveDisplay();
}

ATMMU::ATMMU(int init_cash, string mybank)
: ATM(int init_cash, string mybank)
{}

ATMMU::ATMMB(int init_cash, string mybank)
: ATM(int init_cash, string mybank)
{}

ATMMU::ATMSU(int init_cash, string mybank)
: ATM(int init_cash, string mybank)
{}

ATMMU::ATMSB(int init_cash, string mybank)
: ATM(int init_cash, string mybank)
{}

void ATMMU::checkPW(string accNum)
{
	string inputPW = display->pwcheck(); // 비빌번호 물어보고 받아옴
	string PW;
	for (int i = 0; i < ATM::numOfBanks; i++) {
		string result = ATM::All_banks[i]->getAccPW(accNum);
		if (result != "none") {
			PW = result;
			break;
		}
	}

	if (PW == "none") {
		display->pwwrong();
		return;
	}
	else if (PW == inputPW) {
		display->pwright();
		return;
	}
}

void ATMMB::checkPW(string inputPW, string accNum)
{
	string inputPW = display->pwcheck(); // 비빌번호 물어보고 받아옴
	string PW;
	for (int i = 0; i < ATM::numOfBanks; i++) {
		string result = ATM::All_banks[i]->getAccPW(accNum);
		if (result != "none") {
			PW = result;
			break;
		}
	}

	if (PW == "none") {
		display->pwwrong();
		sessionInit();
	}
	else if (PW == inputPW) {
		display->pwright();

	}
}

void ATMSU::checkPW(string inputPW, string accNum)
{
	string inputPW = display->pwcheck(); // 비빌번호 물어보고 받아옴
	string PW = primary_bank->getAccPW(accNum);

	if (PW == "none") {
		display->pwwrong();
		sessionInit();
	}
	else if (PW == inputPW) {
		display->pwright();

	}
}

void ATMSB::checkPW(string inputPW, string accNum)
{
	string inputPW = display->pwcheck(); // 비빌번호 물어보고 받아옴
	string PW = primary_bank->getAccPW(accNum);

	if (PW == "none") {
		display->pwwrong();
		sessionInit();
	}
	else if (PW == inputPW) {
		display->pwright();

	}
}

void ATMSB::choose_language()
{
	string lang = display.getlang(); // 언어 물어보고 받아옴
	if (lang == "Korean") {
		display = new Kr_InteractiveDisplay();
	}
	else if (lang == "English") {
		display = new Eng_InteractiveDisplay();
	}
}

void ATMMB::choose_language()
{
	string lang = display.getlang(); // 언어 물어보고 받아옴
	if (lang == "Korean") {
		display = new Kr_InteractiveDisplay();
	}
	else if (lang == "English") {
		display = new Eng_InteractiveDisplay();
	}
}

