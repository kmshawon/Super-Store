#include <bits/stdc++.h>
#include<fstream>
#include "function.h"
#include "navigation.h"
#include "login.h"
#include "Customer.h"
#include "navigation.h"
using namespace std;
void login(){
    int cnt;
    string userid,password,id,pass;
    cout<<"\t\t\tEnter Your username\n";
    cin>>userid;
     cout<<"\t\t\tPassword\n";
     cin>>password;

     ifstream input("records.txt");
     while (input>>id>>pass)
     {
        if(id==userid && pass==password){
            cnt=1;
        }
     }
     
    input.close();
    if(cnt==1){
        cout<<"\t\t"<<userid<<"Login successfull\t";
    }
    else{
        cout<<"\t\t"<<"Login unsuccessfull\t";
    }
}
void registration(){
    string ruserId,rpassword,rid,rpass;
    cout<<"\t\t\tEnter the user name: \n";
    cin>>ruserId;
    cout<<"\t\t\tEnter the password: \n";
    cin>>rpassword;

    ofstream f1("records.txt", ios::app);
    f1<<ruserId<<"\t"<<rpassword<<endl;
     cout<<"\t\t\tRegistration succesfulll\n";

}