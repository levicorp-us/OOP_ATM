#include "ATM.h"
#include "Card.h"
#include <iostream>
#include <typeinfo>

using namespace std;

void ATMMU::cardCheck(Card c) {
    if (typeid(c).name() == "General_Card") {
        //wrong_cnt = 0;
        //acc = c->GetAccNum();
        //while (wrong_cnt < 3) {
        //    pw = getPW; /*interactiveDisplay�� ���� pw�� ����?*/
        //    pw_checking = checkPW(pw, acc);
        //    if(!pw_checking) {
        //        wrong_cnt++;
        //        std::cout << "���� �� " << wrong_cnt << "Ʋ��.\n�ٽ��Ͻ�? << endl;
        //    } else {
        //        break;        
        //}    
        ///*interactiveDisplay�� ���� �ŷ� ��� ����*/
    }
    else if (typeid(c).name() == "Admin_Card") {
        printLog();
    }
}

void ATM::printLog() {
    //int history_len = Get_History_len();
    //for (int i = 0; i < history_len; i++) {
        // std::cout << get_ID() << "\t";
        // std::cout << get_card_number() << "\t";
        // std::cout << get_amount() << "\t";
        // std::cout << get_type() << std::endl;
        //transaction history log ���}
}