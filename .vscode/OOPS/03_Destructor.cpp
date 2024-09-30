#include<iostream>
using namespace std;



class Customer{


string name;
int * balance;

public:
Customer(string a1){
    name=a1;
    cout<<"Constructor is called"<<name<<endl;
    name="default";
    balance=new int;

    *balance=0;
}
~Customer(){
    // delete balance;
    cout<<"Destructor is called"<<name<<endl;
}



};
int main(){

    Customer A1("A1");
    Customer *A2 =new Customer("a2");
    delete A2; // ye ish liye lekha hai taki destructor call ho jab dynamic memory allocation ho




    return 0;
}