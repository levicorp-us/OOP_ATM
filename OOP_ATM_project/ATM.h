#pragma once
#include <string>
#include "Bank.h"
#include "Log.h"
#include "InteractiveDisplay.h"

class Bank;
class Card;
class Transaction;
using namespace std;

class ATM {
protected:
    InteractiveDisplay* display;
    static int numOfBanks;
    static Bank** All_Banks;
    int serial_number;
    Money* atm_cash; // transaction 진행 시 갱신
    Bank* primary_bank;
    //card를 가져와서 정보들을 어디로 가져다 놓는가
    Log** history;
    int hisIndex; // exclusive. (=len(history))
    int cashLimit; // transaction 진행 시 고려
    int checkLimit; // transaction 진행 시 고려
public:
    ATM(int serial_num, int cash, Bank* mybank, bool bilang);
    virtual void checkPW(string accNum);
    // Bank의 getAccPW로 password 받아와서 비교
    virtual void sessionInit();
    virtual void sessionMain();
    virtual void cardCheck(Card c);
    virtual void deposit(string accNum);
    virtual void withdrawal(string accNum);
    virtual void transfer(string accNum);
    void printLog();
    Bank* findBank(string bankName);
};


class ATMMU : public ATM {
public:
    void checkPW(string accNum);
    // Bank의 getAccPW로 password 받아와서 비교
    void sessionInit();
    void sessionMain();
    void cardCheck(Card c);
    void deposit(string accNum);
    void withdrawal(string accNum);
    void transfer(string accNum);
};

class ATMMB : public ATM {
private:
    bool isEng;

public:
    void choose_language();
    void checkPW(string accNum);
    // Bank의 getAccPW로 password 받아와서 비교
    void sessionInit();
    void sessionMain();
    void cardCheck(Card c);
    void deposit(string accNum);
    void withdrawal(string accNum);
    void transfer(string accNum);
};

class ATMSU : public ATM {
public:
    void checkPW(string accNum);
    // Bank의 getAccPW로 password 받아와서 비교
    void sessionInit();
    void sessionMain();
    void cardCheck(Card c);
    void deposit(string accNum);
    void withdrawal(string accNum);
    void transfer(string accNum);
};

class ATMSB : public ATM {
private:
    bool isEng;
public:
    void choose_language();
    void checkPW(string accNum);
    // Bank의 getAccPW로 password 받아와서 비교
    void sessionInit();
    void sessionMain();
    void cardCheck(Card c);
    void deposit(string accNum);
    void withdrawal(string accNum);
    void transfer(string accNum);
};