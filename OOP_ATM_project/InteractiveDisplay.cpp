#include "Money.h"
#include "InteractiveDisplay.h"
#include <iostream>

Card Kr_Display::hello()
{
	std::wcout << L"ȯ���մϴ�" << std::endl;
	main_menu();
	std::wcout << L"�����Ϸ���, ī�带 ������ �ֽʽÿ�" << std::endl;
	
}

void Kr_Display::main_menu()
{	
	std::wcout << L"1\t2\t3\n4\t5\t6\n7\t8\t9" << std::endl;
	std::wcout << L"[����/��ǥ ���� �� ���ⱸ]" << std::endl;
	std::wcout << L"[ī�� ���Ա�]" << std::endl;
	std::wcout << L"[������ �μⱸ]" << std::endl;
}

void Kr_Display::transaction()
{
	std::wcout << L"replace it with suitable text" << std::endl;
}

void Kr_Display::going_back()
{
	std::wcout << L"���� �޴��� ���ư��ϴ�" << std::endl;
}

string Kr_Display::inpBank()
{
	string result;
	std::wcout << L"�۱��Ͻ� ������ �Է��Ͽ� �ֽʽÿ�" << std::endl;
	std::cin >> result;
	return result;
}


int Kr_Display::chooseMode()
{
	int n;
	std::wcout << L"���Ͻô� �ŷ��� ��ȣ�� �����Ͽ� �ֽʽÿ�" << std::endl;
	std::wcout << L"1.�Ա� 2.���� 3.��ü 4.�ڷΰ��� 5.����" << std::endl;
	std::cin >> n;
	return n;

}


int Kr_Display::chooseWithdrawalMode()
{
	int n;
	std::wcout << L"���Ͻô� ��ü ������ ��ȣ�� �����Ͽ� �ֽʽÿ�" << std::endl;
	std::wcout << L"1.���� ��ü\n2.���� ��ü" << std::endl;
	std::cin >> n;
	return n;

}

int Kr_Display::getAmount()
{
	int n;
	std::wcout << L"���Ͻô� �ݾ��� �Է��Ͽ� �ֽʽÿ�" << std::endl;
	std::cin >> n;
	return n;

}
Cash* Kr_Display::getCash() // ���� �۵� Ȯ�� �ʿ��մϴ�.
{
	int n;
	Cash* result = new Cash;
	std::wcout << L"���� ���Ա��� �����ϴ�" << std::endl;

	std::wcout << L"���������� �����Ͽ� �ֽʽÿ�" << std::endl;
	std::cin >> Result->num_50000;
	std::wcout << L"�������� �����Ͽ� �ֽʽÿ�" << std::endl;
	std::cin >> Result->num_10000;
	std::wcout << L"��õ������ �����Ͽ� �ֽʽÿ�" << std::endl;
	std::cin >> Result->num_5000;
	std::wcout << L"õ������ �����Ͽ� �ֽʽÿ�" << std::endl;
	std::cin >> Result->num_100;

	return result;
}

bool Kr_Display::cashCheck()
{
	string result;
	std::wcout << L"���� �Ǵ� ��ǥ�� �����Ͽ� �ֽʽÿ�" << std::endl;
	std::cin >> result;
	if (result == "����")
	{
		return true;
	}
	return
}


Check* Kr_Display::getCheck()
{
	int n;
	std::wcout << L"�����Ͻ� ��ǥ�� �ݾ��� �Է��Ͽ� �ֽʽÿ�" << std::endl;
	std::cin >> n;
	Check* result;
	result = new Check;
	result->amount = n;
	return result
}

void Kr_Display::printRemainCount(int count)
{
	std::wcout << count << L"�� ���ҽ��ϴ�" << std::endl;
}

void Kr_Display::done()
{
	std::wcout << L"�̿��� �ּż� �����մϴ�." << std::endl;
}

string Kr_Display::getPW()
{
	std::wcout << L"�̿��� �ּż� �����մϴ�." << std::endl;

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