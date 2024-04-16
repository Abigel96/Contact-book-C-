#include<iostream>
using namespace std;
int main()
{
int pin = 1234;
int balance = 0;
int deposit;
int withdraw = 0;
int pinTake;
cout<<"enter the pin to login: ";
cin>>pinTake;
if(pin == pinTake)
{
     cout<<"================main menu====================="<<endl;
     cout<<"==================1,Balance====================="<<endl;
     cout<<"=================2,Deposit======================"<<endl;
     cout<<"=================3,withdrawal=================  "<<endl;
      cout<<"=================4,pin change================= "<<endl;
     cout<<"=================5,pin status==================="<<endl;
     cout<<"====================6,exit======================"<<endl;
   
}

else
{
cout<<"you have entered wrong pin to login!"<<endl;
}
cout<<"\n\n";
int choice;
do{
   cout<<"enter your choice: " ;
   cin>>choice;
   switch(choice)
   {
    case 1:
    cout<<"your current ba;ance is : "<<balance<<endl;
    break;
    case 2:
    cout<<"enter how much money you want to deposit: " ;
    cin>>deposit;
    balance+=deposit;
       cout<<"you have succesfuly deposited $"<<deposit<<endl;
       break;
     case 3:
     cout<<"enter how much money you want to withdraw: ";
     cin>>withdraw;
     
     if(withdraw>balance)
     {
        cout<<"you cannot withdraw $"<<endl;
     }
       else
       {
           balance-=withdraw;
           cout<<"you have succesfully withdrawed $"<<withdraw<<endl;
       }
       break;
       case 4:
       int oldpinTake, newpin,newpinVerify;
       cout<<"enter the old pin: " ;
       cin>>oldpinTake;
       if(oldpinTake == pin)
       {
         cout<<"enter the new pin: " ;  
           cin>>newpin;
           cout<<"enter new pin again: ";
           cin>>newpinVerify;
           if(newpin==newpinVerify)
           {
               pin==newpinVerify;
               cout<<"your pin is succesfully updated!"<<endl;
           }
           else {
               cout<<"you pin dont match"<<endl;
           }
       }
       else
       {
           cout<<"you have entered wrong pin"<<endl;
       }
       break;
       case 5:
       cout<<"your current pin is"<<pin<<endl;
       break;
       
   
   
    



return 0;
}

}while(choice!=6);
}
