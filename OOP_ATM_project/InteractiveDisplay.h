#pragma once
#include "Card.h"
#include <string>

using namespace std;

class InteractiveDisplay
{
public:
    virtual Card hello() = 0;
    virtual void main_menu() = 0;
    virtual void transaction() = 0;
    virtual void going_back() = 0;
    virtual void done() = 0;
    virtual int getAmount() = 0;
    virtual int chooseMode() = 0;
    virtual bool cashCheck() = 0; //True if cash False if check
    virtual Cash* getCash() = 0;
    virtual Check* getCheck() = 0; //dynamic alloc
    virtual string inpBank() = 0;
    virtual int chooseWithdrawalMode() = 0;
    virtual void printRemainCount(int count) = 0;
    virtual string getPW() = 0;
};

class Kr_Display : public InteractiveDisplay 
{
public: 
    void hello();
    void main_menu();
    void transaction();
    void going_back();
    void done();
    int getAmount();
    int chooseMode();
    bool cashCheck();
    Cash* getCash();
    Check* getCheck();
    string inpBank();
    int chooseWithdrawalMode();
    void printRemainCount();
    string getPW()
};

class Eng_Display : public InteractiveDisplay 
{
public:
    void hello();
    void main_menu();
    void transaction();
    void going_back();
    void done();
    int getAmount();
    int chooseMode();
    bool cashCheck();
    Cash* getCash();
    Check* getCheck();
    string inpBank();
    int chooseWithdrawalMode();
};