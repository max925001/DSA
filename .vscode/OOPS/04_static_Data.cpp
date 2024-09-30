#include<iostream>
using namespace std;
class Customer{

string name;
int account_num;
int balance;

public:
static int total_customer ;
Customer(string a,int b,int c){

name=a;
account_num=b;
balance=c;
total_customer++;
}

 static void accessStatic(){ // ye bas static data ko access kar sakta hai
cout<<total_customer <<endl;
}

void Display(){
    cout<<name <<" "<<account_num<<" " <<balance<<" " <<total_customer<<endl;
}

};
int Customer::total_customer =0;
int main(){
Customer A1("shivam" ,123,1000);
A1.Display();
Customer A2("Rohit" ,1223,1000);
// Customer::total_customer =5; for access static data member
Customer::accessStatic();


A2.Display();




    return 0;
}