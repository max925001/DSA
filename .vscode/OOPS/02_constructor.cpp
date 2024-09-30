#include<iostream>
using namespace std;


class Customer{
    public:
    string name;
    int account_number;
    int balance;

Customer(){
    cout<<"Constructor is called"<<endl;}
// }
//     Customer(string n, int a, int b){
// name=n;
// account_number=a;
// balance=b;
//     }
//     Customer(string name, int account_number, int balance){
// this->name=name;
// this->account_number=account_number;
// this->balance=balance;
//     }


// Inline Constructor

inline Customer(string a,int b,int c):name(a),account_number(b),balance(c){

}
};
int main(){
Customer A1; // when we create this then my constructor is called
Customer A2("Ram", 123, 2000);// ye second constructor hai initialize initial value
cout<<A1.name<<endl;
cout<<A1.account_number<<endl;
cout<<A1.balance<<endl;

cout<<"After Initialize initial value"<<endl;
cout<<A2.name<<endl;
cout<<A2.account_number<<endl;
cout<<A2.balance<<endl;


Customer A3("Rama", 123, 2000 );

cout<<"Use of This keyword"<<endl;
cout<<A3.name<<endl;
cout<<A3.account_number<<endl;
cout<<A3.balance<<endl;



// Copy constructor is present by default

Customer A4(A3);


cout<<"Copy constructor"<<endl;
cout<<A4.name<<endl;
cout<<A4.account_number<<endl;
cout<<A4.balance<<endl;







    return 0;
}