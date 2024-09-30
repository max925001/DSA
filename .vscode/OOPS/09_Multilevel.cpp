#include<iostream>
using namespace std;


class Person{
protected:
string name;
int age;


};
class Employer:public Person{

protected:
string company_name;
int salary;

public:
Employer(string company_name,int salary){

this->company_name=company_name;
this->salary =salary;
}

};
class Manager:public Employer{

protected:
string department_name;

public:
Manager(string name,int age ,string company_name,int salary,string department_name):Employer(company_name,salary){
this->name=name;
this->age=age;
// this->company_name=company_name;
this->department_name=department_name;
// this->salary =salary;

}

void Display(){


cout<<name <<" "<<age <<" "<<company_name <<" "<<department_name<< " "<<salary<<endl;
}

};




int main(){

Manager A("shivam",32,"xyz",200000,"Tech");

A.Display();






    return 0;
}