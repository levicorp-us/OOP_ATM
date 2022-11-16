#include <iostream>
#include <fstream>
#include "Account.h"
#include "ATM.h"
#include "Bank.h"
#include "Card.h"
#include "Display.h"
#include "Transaction.h"

#define NUM_OF_BANKS 3
#define NUM_OF_ACC_EACHBANK 5

using namespace std;

Bank** InfoInit() {
    Bank** allbanks = new Bank* [NUM_OF_BANKS];
    Account*** account_lists = new Account** [NUM_OF_BANKS];
    int bank_account_len[NUM_OF_BANKS];
    string bank_name_list[NUM_OF_BANKS];

    for (int i = 0; i < NUM_OF_BANKS; i++) {
        account_lists[i] = new Account* [NUM_OF_ACC_EACHBANK];
    }

    int current_bank_idx = 0;
    string current_bank_name = "";

    ifstream ifs;
    ifs.open("accinfo.txt");
    
    string bank_name;
    string user_name;
    string acc_number;
    string password;
    int fund;
    string dummy;

    int i = 0;
    for (i=0; !ifs.eof(); i++) {
        ifs >> bank_name;
        if (current_bank_name == "") {
            current_bank_name = bank_name;
        }
        else if (current_bank_name != bank_name) {
            bank_name_list[current_bank_idx] = current_bank_name;
            bank_account_len[current_bank_idx] = i;
            current_bank_idx++;
            current_bank_name = bank_name;
            i = 0;
        }
        ifs >> user_name;
        ifs >> acc_number;
        ifs >> password;
        ifs >> fund;
        ifs >> dummy;

        account_lists[current_bank_idx][i] = new Account(bank_name, user_name, password, acc_number, fund);
    }
    bank_name_list[current_bank_idx] = current_bank_name;
    bank_account_len[current_bank_idx] = i;

    for (int i = 0; i < NUM_OF_BANKS; i++) {
        allbanks[i] = new Bank(bank_name_list[i], account_lists[i], bank_account_len[i]);
        
        // Testing code
        cout << endl << endl;
        allbanks[i]->showAccounts();
    }
    return allbanks;
}

Bank** ATM::All_Banks = InfoInit();

int main() {
    ATM* atm1;
    return 0;
}