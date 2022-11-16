#include "Account.h"

Account::Account(string bankname, string username, string pw, string accnum, int initfund)
: bank_name{ bankname }, user_name{ username }, password{ pw }, 
  acc_number{ accnum }, fund { initfund }
{}

void Account::edit_acc_fund(int amount) {
	fund += amount;
}

string Account::get_acc_number() {
	return acc_number;
}
string Account::get_bank_name() {
	return bank_name;
}
string Account::get_user_name() {
	return user_name;
}
string Account::get_password() {
	return password;
}
int Account::get_fund() {
	return fund;
}