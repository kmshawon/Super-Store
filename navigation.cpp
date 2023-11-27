#include <bits/stdc++.h>
#include <bits/stdc++.h>
#include<stdio.h>
#include "function.h"
#include "navigation.h"
#include "login.h"
#include "Customer.h"
#include "navigation.h"
using namespace std;

void mainDisplay(short int n)
{
    system("cls");
    switch (n)
    {
    case 1:
        //Admin();
        cout<<"Admin\n";
        break;
    case 2:
        Customer();
        
        break;
    case 3:
        //Admin();
        cout<<"Exit\n";
        break;
    default:
    cout<<"\t\tInvalide choice\n";
        break;
    }
}

void Customer_loginDisplay(int a2){
    switch (a2)
    {
    case 1:
        login();
      //  cout<<"Login\n";
        break;
    case 2:
         registration();
        
        break;
    case 3:
        //Admin();
        cout<<"Forgot\n";
        break;
    default:
    cout<<"\t\tInvalide choice\n";
        break;
    }
}