#include<iostream>
using namespace std;
class Customer{

string name ;
int balance;

public:

Customer(string a, int b){

name=a;
balance=b;

}

void balance_data(int a){
if(a<0){
    return;
}
balance =balance+a;



}
void Display(){
    cout<<name<<" "<<balance<<endl;
}

};
int main(){
Customer A1("shivam" ,1000);

A1.balance_data(2000);

A1.balance_data(-1000);
A1.Display();

    return 0;
}