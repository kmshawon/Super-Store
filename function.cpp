#include <bits/stdc++.h>
#include "function.h"
#include "navigation.h"
#include "login.h"
#include "Customer.h"
#include "navigation.h"
using namespace std;

void mySuperStore() {
    Display();
    mainDisplay(Choice_Display());
   

}
void Display(){
    
    cout<<"\t\t\t\t Welcome to Goriber Store\t\t\t\t\t\n";
    cout<<"\t-------------------------------------------------------------------------------------------------------------------------\n";
    cout<<"\t|                                                                                                                        |\n";
    cout<<"\t|                                                                                                                        |\n";
    cout<<"\t|                                                                                                                        |\n";
    cout<<"\t|                                                                                                                        |\n";
    cout<<"\t|     1>>ADMIN                                                                                                           |\n";
    cout<<"\t|                                                                                                                        |\n";
    cout<<"\t|                                                                                                                        |\n";
    cout<<"\t|     2>>Customer                                                                                                        |\n";
    cout<<"\t|                                                                                                                        |\n";
    cout<<"\t|                                                                                                                        |\n";
    cout<<"\t|     3>>EXIT                                                                                                            |\n";
    cout<<"\t|                                                                                                                        |\n";
    cout<<"\t|                                                                                                                        |\n";
    cout<<"\t|                                                                                                                        |\n";
    cout<<"\t|                                                                                                                        |\n";
    cout<<"\t|                                                                                                                        |\n";
    cout<<"\t|                                                                                                                        |\n";
    cout<<"\t|                                                                                                                        |\n";
    cout<<"\t|                                                                                                                        |\n";
    cout<<"\t|                                                                                                                        |\n";
    cout<<"\t|                                                                                                                        |\n";
    cout<<"\t|                                                                                                                        |\n";
    cout<<"\t-------------------------------------------------------------------------------------------------------------------------\n";
}
int Choice_Display(){
    short int choice_Display;
       system("cls");
    cout<<"\t-------------------------------------------------------------------------------------------------------------------------\n";
    cout<<"\t|                                                                                                                        |\n";
    cout<<"\t| Enter Your choice>> ";cin>>choice_Display;
    return choice_Display;
}
void Customer_Login_Display(){
    system("cls");
    cout<<"\t\t\t\t Welcome to User Login Page\t\t\t\t\t\n";
    cout<<"\t-------------------------------------------------------------------------------------------------------------------------\n";
    cout<<"\t|                                                                                                                        |\n";
    cout<<"\t|                                                                                                                        |\n";
    cout<<"\t|                                                                                                                        |\n";
    cout<<"\t|                                                                                                                        |\n";
    cout<<"\t|     1>>Login                                                                                                           |\n";
    cout<<"\t|                                                                                                                        |\n";
    cout<<"\t|                                                                                                                        |\n";
    cout<<"\t|     2>>Register                                                                                                        |\n";
    cout<<"\t|                                                                                                                        |\n";
    cout<<"\t|                                                                                                                        |\n";
    cout<<"\t|     3>>Forget Password                                                                                                 |\n";
    cout<<"\t|                                                                                                                        |\n";
    cout<<"\t|                                                                                                                        |\n";
    cout<<"\t|                                                                                                                        |\n";
    cout<<"\t|     4>>Exit                                                                                                            |\n";
    cout<<"\t|                                                                                                                        |\n";
    cout<<"\t|                                                                                                                        |\n";
    cout<<"\t|                                                                                                                        |\n";
    cout<<"\t|                                                                                                                        |\n";
    cout<<"\t|                                                                                                                        |\n";
    cout<<"\t|                                                                                                                        |\n";
    cout<<"\t|                                                                                                                        |\n";
    cout<<"\t-------------------------------------------------------------------------------------------------------------------------\n";
}
