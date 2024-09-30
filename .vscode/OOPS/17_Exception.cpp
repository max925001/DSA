#include<iostream>
#include<exception>
using namespace std;

class Customer{


string name;
int balance;
int account_number;

public:

Customer(string name, int balance, int account_number){


    this->name=name;
    this->balance=balance;
    this->account_number=account_number;
}

// Deposit
void deposit(int amount ,int acc){

    if(amount>0 && acc==account_number){
        balance+=amount;
        cout<<amount<<" is credit successfully" <<endl;
        
    }
    else{
        throw runtime_error("Invalid Amount") ;
    }
}
void withdraw(int amount , int acc){
if(amount>0 && amount<=balance && acc==account_number){
    balance-=amount;
     cout<<amount<<" is Debit successfully" <<endl;
}
else if (amount<0){
    throw runtime_error("amount should be greater than 0");
}
else{
    throw runtime_error("Insufficient Balance");
}

}

void display_amount(){
    cout<<"Your current amount is "<<balance <<endl;
}


}
;
int main(){

Customer C1 ("Shivam" ,10000,345);
try{
C1.deposit(1000,345);

C1.withdraw(15620 ,345);
C1.display_amount();

}catch(const runtime_error &e){

    cout<<"Exception Occured:"<<e.what() <<endl;
}

    return 0;
}