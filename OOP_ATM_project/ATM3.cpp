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
        //    pw = getPW; /*interactiveDisplay를 통해 pw를 받음?*/
        //    pw_checking = checkPW(pw, acc);
        //    if(!pw_checking) {
        //        wrong_cnt++;
        //        std::cout << "대충 님 " << wrong_cnt << "틀림.\n다시하실? << endl;
        //    } else {
        //        break;        
        //}    
        ///*interactiveDisplay를 통해 거래 모드 선택*/
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
        //transaction history log 출력}
}