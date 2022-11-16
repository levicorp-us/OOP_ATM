#include "Card.h"
General_Card::General_Card(string acc_num, string bank) {
	account_number = acc_num;
	bank_type = bank;
	//계좌번호, 은행 종류 외 필요한거 생각나면 작성
}

string General_Card::GetAccNum() {
	return account_number;
}

string General_Card::GetBanktype() {
	return bank_type;
}

Admin_Card::Admin_Card() {
};