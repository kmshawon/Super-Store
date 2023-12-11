#pragma once
#include<string.h>
class shopping
{
private:
    int pCode;
    float price;
    float dis;
    std::string pname;

public:
    void menu();
    //Admin
    void adminstrator();
    //Customer
    void Customer_Login_Display();
    void login();
    void registration();
    void buyer();
    //feature
    void add();
    void edit();
    void rem();
    void list();
    void receipt();
};
