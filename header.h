#pragma once
#include<string.h>
class shopping
{
public:
    int pCode;
    float price;
    float dis;
    std::string pname;

public:
    void menu();
    void adminstrator();
    void buyer();
    void add();
    void edit();
    void rem();
    void list();
    void receipt();
};
