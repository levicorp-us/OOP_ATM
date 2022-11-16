#include "Money.h"
#include "InteractiveDisplay.h"
#include <iostream>

Card Kr_Display::hello()
{
	std::wcout << L"환영합니다" << std::endl;
	main_menu();
	std::wcout << L"시작하려면, 카드를 삽입해 주십시오" << std::endl;
	
}

void Kr_Display::main_menu()
{	
	std::wcout << L"1\t2\t3\n4\t5\t6\n7\t8\t9" << std::endl;
	std::wcout << L"[현금/수표 투입 및 배출구]" << std::endl;
	std::wcout << L"[카드 투입구]" << std::endl;
	std::wcout << L"[영수증 인쇄구]" << std::endl;
}

void Kr_Display::transaction()
{
	std::wcout << L"replace it with suitable text" << std::endl;
}

void Kr_Display::going_back()
{
	std::wcout << L"이전 메뉴로 돌아갑니다" << std::endl;
}

string Kr_Display::inpBank()
{
	string result;
	std::wcout << L"송금하실 은행을 입력하여 주십시오" << std::endl;
	std::cin >> result;
	return result;
}


int Kr_Display::chooseMode()
{
	int n;
	std::wcout << L"원하시는 거래의 번호를 선택하여 주십시오" << std::endl;
	std::wcout << L"1.입금 2.인출 3.이체 4.뒤로가기 5.종료" << std::endl;
	std::cin >> n;
	return n;

}


int Kr_Display::chooseWithdrawalMode()
{
	int n;
	std::wcout << L"원하시는 이체 종류의 번호를 선택하여 주십시오" << std::endl;
	std::wcout << L"1.현금 이체\n2.계좌 이체" << std::endl;
	std::cin >> n;
	return n;

}

int Kr_Display::getAmount()
{
	int n;
	std::wcout << L"원하시는 금액을 입력하여 주십시오" << std::endl;
	std::cin >> n;
	return n;

}
Cash* Kr_Display::getCash() // 정상 작동 확인 필요합니다.
{
	int n;
	Cash* result = new Cash;
	std::wcout << L"현금 투입구가 열립니다" << std::endl;

	std::wcout << L"오만원권을 투입하여 주십시오" << std::endl;
	std::cin >> Result->num_50000;
	std::wcout << L"만원권을 투입하여 주십시오" << std::endl;
	std::cin >> Result->num_10000;
	std::wcout << L"오천원권을 투입하여 주십시오" << std::endl;
	std::cin >> Result->num_5000;
	std::wcout << L"천원권을 투입하여 주십시오" << std::endl;
	std::cin >> Result->num_100;

	return result;
}

bool Kr_Display::cashCheck()
{
	string result;
	std::wcout << L"현금 또는 수표를 선택하여 주십시오" << std::endl;
	std::cin >> result;
	if (result == "현금")
	{
		return true;
	}
	return
}


Check* Kr_Display::getCheck()
{
	int n;
	std::wcout << L"투입하실 수표의 금액을 입력하여 주십시오" << std::endl;
	std::cin >> n;
	Check* result;
	result = new Check;
	result->amount = n;
	return result
}

void Kr_Display::printRemainCount(int count)
{
	std::wcout << count << L"번 남았습니다" << std::endl;
}

void Kr_Display::done()
{
	std::wcout << L"이용해 주셔서 감사합니다." << std::endl;
}

string Kr_Display::getPW()
{
	std::wcout << L"이용해 주셔서 감사합니다." << std::endl;

}


void Eng_Display::hello()
{
	std::cout << "replace it with suitable text" << std::endl;
}

void Eng_Display::main_menu()
{
	std::cout << "replace it with suitable text" << std::endl;
}

void Eng_Display::transaction()
{
	std::cout << "replace it with suitable text" << std::endl;
}

void Eng_Display::going_back()
{
	std::cout << "replace it with suitable text" << std::endl;
}

void Eng_Display::done()
{
	std::cout << "replace it with suitable text" << std::endl;
}

int Eng_Display::chooseMode()
{
	std::cout << "" << std::endl;

}

int Eng_Display::getAmount()
{
	std::cout << "" << std::endl;

}