#include "Card.h"
General_Card::General_Card(string acc_num, string bank) {
	account_number = acc_num;
	bank_type = bank;
	//���¹�ȣ, ���� ���� �� �ʿ��Ѱ� �������� �ۼ�
}

string General_Card::GetAccNum() {
	return account_number;
}

string General_Card::GetBanktype() {
	return bank_type;
}

Admin_Card::Admin_Card() {
};