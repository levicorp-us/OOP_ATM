#pragma once
#include <string>

using namespace std;

class Display
{
public:
    virtual void hello() = 0;
    virtual void main_menu() = 0;
    virtual void transaction() = 0;
    virtual void going_back() = 0;
    virtual void done() = 0;
};

class Kr_Display : public Display {
public: 
    void hello();
    void main_menu();
    void transaction();
    void going_back();
    void done();
};

class Eng_Display : public Display 
{
public:
    void hello();
    void main_menu();
    void transaction();
    void going_back();
    void done();
};