#pragma once
#include <string>

using namespace std;

class Log {
    private:
        int ID;
        int card_number;
        int type; //recive int for ATM by enum; or string
        int amount;
    public:
        Log(int Idnum, string card_num, int quantity, int mode); // Deposit:1, WithDraw:2, Transfer:3
        int get_ID();
        int get_card_number();
        int get_amount();
        int get_type();
};