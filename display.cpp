#include <bits/stdc++.h>
#include <iostream>
#include <string.h>

#include "header.h"
using namespace std;

// void shopping::buyer()
// {
// buyer_manu:
//     system("clear");
//     int choice;
//     cout << "\t\t\t\t Buyer P\t\t\t\t\t\n";
//     cout << "\t-------------------------------------------------------------------------------------------------------------------------\n";
//     cout << "\t|                                                                                                                        |\n";
//     cout << "\t|       1) Buy Product                                                                                                   |\n";
//     cout << "\t|       2) go Back                                                                                                       |\n";
//     cout << "\t|       Enter Your Choice                                                                                                |\n";
//     cout << "\t-------------------------------------------------------------------------------------------------------------------------\n";
//     cin >> choice;
//     switch (choice)
//     {
//     case 1:
//         receipt();
//         break;
//     case 2:
//         menu();
//         break;
//     default:
//         cout << "Envalide choicee\n";
//     }
//     goto buyer_manu;
// }
void shopping ::menu()
{
main_manu:
    int choice;
    string email;
    string password;

    system("clear");
    cout << "\t\t\t\t Welcome to Goriber Store\t\t\t\t\t\n";
    cout << "\t-------------------------------------------------------------------------------------------------------------------------\n";
    cout << "\t|                                                                                                                        |\n";
    cout << "\t|                                                                                                                        |\n";
    cout << "\t|                                                                                                                        |\n";
    cout << "\t|                                                                                                                        |\n";
    cout << "\t|     1>>ADMIN                                                                                                           |\n";
    cout << "\t|                                                                                                                        |\n";
    cout << "\t|                                                                                                                        |\n";
    cout << "\t|     2>>Buyer                                                                                                           |\n";
    cout << "\t|                                                                                                                        |\n";
    cout << "\t|                                                                                                                        |\n";
    cout << "\t|     3>>EXIT                                                                                                            |\n";
    cout << "\t|                                                                                                                        |\n";
    cout << "\t|                                                                                                                        |\n";
    cout << "\t|                                                                                                                        |\n";
    cout << "\t|                                                                                                                        |\n";
    cout << "\t|                                                                                                                        |\n";
    cout << "\t|                                                                                                                        |\n";
    cout << "\t|                                                                                                                        |\n";
    cout << "\t|                                                                                                                        |\n";
    cout << "\t|                                                                                                                        |\n";
    cout << "\t|                                                                                                                        |\n";
    cout << "\t|                                                                                                                        |\n";
    cout << "\t-------------------------------------------------------------------------------------------------------------------------\n";
    cout << "\t|     Enter Your Choice                                                                                                  |\n";
    cin >> choice;

    switch (choice)
    {
    case 1:{
        std::string admin1, admin_pass;
        cout << "Enter Your  User name";
        cin >> admin1;
        cout << "Enter Your Password";
        cin >> admin_pass;
        if (admin1 == "nub" && admin_pass == "123")
        {
            adminstrator();
        }
        else
        {
            cout << "login failed\n";
        }
        break;
    }
    case 2:
    {
        buyer();
    }
    case 3:
    {
        exit(0);
    }
    default:
    {
        cout << "Please Select from the List";
    }
    }
    goto main_manu;
}

void shopping::adminstrator()
{
adminstrator:
    int choice;
    system("clear");
    cout << "\t\t\t\t Welcome to Admin  Page\t\t\t\t\t\n";
    cout << "\t-------------------------------------------------------------------------------------------------------------------------\n";
    cout << "\t|                                                                                                                        |\n";
    cout << "\t|                                                                                                                        |\n";
    cout << "\t|                                                                                                                        |\n";
    cout << "\t|                                                                                                                        |\n";
    cout << "\t|     1>>Add the Product                                                                                                 |\n";
    cout << "\t|                                                                                                                        |\n";
    cout << "\t|                                                                                                                        |\n";
    cout << "\t|     2>>Modify the Product                                                                                              |\n";
    cout << "\t|                                                                                                                        |\n";
    cout << "\t|                                                                                                                        |\n";
    cout << "\t|     3>>Delete the Product                                                                                              |\n";
    cout << "\t|                                                                                                                        |\n";
    cout << "\t|                                                                                                                        |\n";
    cout << "\t|     4>>Exit to Main manu                                                                                               |\n";
    cout << "\t|                                                                                                                        |\n";
    cout << "\t|                                                                                                                        |\n";
    cout << "\t|                                                                                                                        |\n";
    cout << "\t|                                                                                                                        |\n";
    cout << "\t|                                                                                                                        |\n";
    cout << "\t|                                                                                                                        |\n";
    cout << "\t|                                                                                                                        |\n";
    cout << "\t-------------------------------------------------------------------------------------------------------------------------\n";
    cin >> choice;
    cout << "\t|       Entert Your choice                                                                                             |\n";
    switch (choice)
    {
    case 1:
        add();
        /* code */
        break;
    case 2:
        edit();
        /* code */
        break;
    case 3:
        rem();
        /* code */
        break;
    case 4:
        menu();
        /* code */
        break;
    default:
        cout << "Envalide choicee\n";
    }
    goto adminstrator;
}

void shopping::buyer()
{
buyer_manu:
    system("clear");
    int choice;
    cout << "\t\t\t\t Buyer P\t\t\t\t\t\n";
    cout << "\t-------------------------------------------------------------------------------------------------------------------------\n";
    cout << "\t|                                                                                                                        |\n";
    cout << "\t|       1) Buy Product                                                                                                   |\n";
    cout << "\t|       2) go Back                                                                                                       |\n";
    cout << "\t|       Enter Your Choice                                                                                                |\n";
    cout << "\t-------------------------------------------------------------------------------------------------------------------------\n";
    cin >> choice;
    switch (choice)
    {
    case 1:
        receipt();
        break;
    case 2:
        menu();
        break;
    default:
        cout << "Envalide choicee\n";
    }
    goto buyer_manu;
}

void shopping::add()
{
add:
    fstream data;
    int c;
    int token = 0;
    float p;
    float d;
    string n;
    cout << "\t\t\t\t Add New Product\t\t\t\t\t\n";
    cout << "\t-------------------------------------------------------------------------------------------------------------------------\n";
    cout << "\t|        Product Code>>                                                                                                  |\n";
    cin >> pCode;
    cout << "\t-------------------------------------------------------------------------------------------------------------------------\n";
    cout << "\t|        Product Name>                                                                                                  |\n";
    cin >> pname;
    cout << "\t-------------------------------------------------------------------------------------------------------------------------\n";
    cout << "\t|        Product Price>                                                                                                  |\n";
    cin >> price;
    cout << "\t-------------------------------------------------------------------------------------------------------------------------\n";
    cout << "\t|        Discount on the product>                                                                                        |\n";
    cin >> dis;

    data.open("database.txt", ios::in);
    if (!data)
    { // if this
        data.open("database.txt", ios::app | ios::out);
        data << " " << pCode << " " << pname << " " << price << " " << dis << "\n";
        data.close();
    }
    else
        data >> c >> n >> p >> d;
    while (!data.eof())
    {
        if (c == pCode)
        {
            token++;
        }
        data >> c >> n >> p >> d;
    }
    data.close();
    if (token > 0)
    {
        goto add;
    }
    else
    {
        data.open("database.txt", ios::app | ios::out);
        data << " " << pCode << " " << pname << " " << price << " " << dis << "\n";
        data.close();
    }
    cout << "\t-------------------------------------------------------------------------------------------------------------------------\n";
    cout << "\t|        Record Inserted  !!                                                                                                |\n";
}

void shopping::edit()
{
    fstream data, data1;
    int pkey;
    int c;
    int token = 0;
    float p;
    float d;
    string n;
    cout << "\t\t\t\t Modify Product\t\t\t\t\t\n";
    cout << "\t-------------------------------------------------------------------------------------------------------------------------\n";
    cout << "\t|        Enter Product Code  !!                                                                                          |\n";
    cin >> pkey;
    data.open("database.txt", ios::in);
    if (!data)
    {
        cout << "\n\n File Dose not Exitst ! \n";
    }
    else
    {
        data1.open("database1.txt", ios::app | ios::out);
        data >> pCode >> pname >> price >> dis;
        while (!data.eof())
        {
            if (pkey == pCode)
            {
                cout << "\t-------------------------------------------------------------------------------------------------------------------------\n";
                cout << "\t|        Product Code>>                                                                                                  |\n";
                cin >> c;
                cout << "\t-------------------------------------------------------------------------------------------------------------------------\n";
                cout << "\t|        Product Name>                                                                                                  |\n";
                cin >> n;
                cout << "\t-------------------------------------------------------------------------------------------------------------------------\n";
                cout << "\t|        Product Price>                                                                                                  |\n";
                cin >> p;
                cout << "\t-------------------------------------------------------------------------------------------------------------------------\n";
                cout << "\t|        Discount on the product>                                                                                        |\n";
                cin >> d;
                data1 << " " << p << " " << n << " " << p << " " << d << "\n";
                cout << "\t\tRecord Edited !!\n";
                token++;
            }
            else
            {

                data1 << " " << pCode << " " << pname << " " << price << " " << dis << "\n";
            }
            data >> pCode >> pname >> price >> dis;
        }
        data.close();
        data1.close();

        remove("database.txt");
        rename("database1.txt", "database.txt");

        if (token == 0)
        {
            cout << "\n\n Record not found";
        }
    }
}

void shopping::rem()
{
    fstream data, data1;
    int pkey;
    int c;
    int token = 0;
    cout << "\t\t\t\t Modify Product\t\t\t\t\t\n";
    cout << "\t-------------------------------------------------------------------------------------------------------------------------\n";
    cout << "\t|        Enter Product Code  !!                                                                                          |\n";
    cin >> pkey;
    data.open("database.txt", ios::in);
    if (!data)
    {
        cout << "\n\n File Dose not Exitst ! \n";
    }
    else
    {
        data1.open("database1.txt", ios::app | ios::out);
        data >> pCode >> pname >> price >> dis;
        while (!data.eof())
        {
            if (pkey == pCode)
            {
                cout << "\t-------------------------------------------------------------------------------------------------------------------------\n";
                cout << "\t|        Product Deleted>                                                                                                 |\n";
                token++;
            }
            else
            {

                data1 << " " << pCode << " " << pname << " " << price << " " << dis << "\n";
            }
            data >> pCode >> pname >> price >> dis;
        }
        data.close();
        data1.close();

        remove("database.txt");
        rename("database1.txt", "database.txt");
        if (token == 0)
        {
            cout << "\n\n Record not found";
        }
    }
}

void shopping::list()
{
    fstream data;
    data.open("database.txt", ios::in);
    cout << "\t-------------------------------------------------------------------------------------------------------------------------\n";
    cout << "\t|        Product Product List>                                                                                                 |\n";
    cout << "\t-------------------------------------------------------------------------------------------------------------------------\n";
    cout << "\t\t Product No |\t\t product Name  |\t\t price |\n";
    data >> pCode >> pname >> price >> dis;
    while (!data.eof())
    {
        cout << "\t\t " << pCode << " |\t\t " << pname << "  |\t\t " << price << " |\n";
        data >> pCode >> pname >> price >> dis;
    }
    data.close();
}

void shopping::receipt()
{
recei:
    fstream data;
    int arrc[100];
    int arrq[100];
    char choice,c1;
    int c = 0;
    float amount;
    float dis = 0;
    float total = 0;
    cout << "\n\n\t\t***Bill*** ";
    data.open("database.txt", ios::in);
    if (!data)
    {
        cout << "\n\n Empty DataBase";
    }
    else
    {
        data.close();
        list();
        cout << "\t-------------------------------------------------------------------------------------------------------------------------\n";
        cout << "\t|        Plesase place the order                                                                                         |\n";
        cout << "\t-------------------------------------------------------------------------------------------------------------------------\n";
        do
        {
            cout << "\n\n Enter Product Code : ";
            cin >> arrc[c];
            cout << "\n\n Enter Product Qunatity : ";
            cin >> arrq[c];
            for (int i = 0; i < c; i++)
            {
                if (arrc[c] == arrc[i])
                {
                    cout << "duplicate Product Code\n";
                    goto recei;
                }
            }
            c++;
            cout << "\t|        Do you Want to buy  Another Product ? if yes then y else no                                                  |\n";
            cin >> choice;

        } while (choice == 'y' || choice == 'Y');
        cout << "\t-------------------------------------------------------------------------------------------------------------------------\n";
        cout << "\t|        Bill                                                                                                           |\n";
        cout << "\t-------------------------------------------------------------------------------------------------------------------------\n";
        cout << "\t Product No |\t product Name  | Product Quantity  | total price   | total Amount   | total amount after Dicount |\n";
        for (int i = 0; i < c; i++)
        {
            data.open("database.txt", ios::in);
            data >> pCode >> pname >> price >> dis;
            while (!data.eof())
            {
                if (pCode == arrc[i])
                {
                    amount = price * arrq[i];
                    dis = amount - (amount * dis / 100);
                    total += dis;
                    cout << "\t\n"<<"\t\t" << pCode << "\t\t" << pname << "\t\t" << arrq[i] << "\t\t" << price << "\t\t" << amount << "\t\t" << dis << "\n";
                        
                }
                data >> pCode >> pname >> price >> dis;
            }

            data.close();
        }
        cout << "\t-------------------------------------------------------------------------------------------------------------------------\n";
        cout << "\t|        Total Amount :  " << total << " Taka only \n";
        
    }
   cin>>c1;
}
