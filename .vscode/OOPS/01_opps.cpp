#include<iostream>
using namespace std;
class student{
    // public:
    private:
string name;
int age;
int roll_number;
string grade;

// Access Value without using public key

public:
void set_name(string n){
    name = n;
}
void set_age(int a){

age =a;
}
void set_roll_number(int r){
roll_number =r;

}
void set_grade(string g){
grade =g;
}




// Get value

void get_name(){
    cout<<name<<endl;

}
void get_age(){

cout<<age<<endl;
}
void get_roll_number(){

cout<<roll_number<<endl;
}

void get_grade(){

cout<<grade<<endl;
}


};


// Size of object

class A{

// char a;
int b ;
char c;
char e;



};
// Dynamic memory allocation


class Customer{

public:
string name ;
int age;
};
int main(){

    /*
student s1;
// s1.name ="shivam";
// s1.age =11;
// s1.roll_number=12;
// s1.grade = "A";


// cout<<s1.name<<endl;
// cout<<s1.age<<endl;
// cout<<s1.roll_number<<endl;
// cout<<s1.grade<<endl;

// student s2;
// s2.name ="shivam";
// s2.age =11;
// s2.roll_number=18;
// s2.grade = "A";


// cout<<s2.name<<endl;
// cout<<s2.age<<endl;
// cout<<s2.roll_number<<endl;
// cout<<s2.grade<<endl;


*/




student s1;
//  Use for set value
s1.set_name("shivam");
s1.set_age(11);
s1.set_roll_number(12);
s1.set_grade("A");

s1.get_name();
s1.get_age();
s1.get_roll_number();
s1.get_grade();



A obj1;
cout<<"size"<<sizeof(obj1)<<endl;

Customer *c1 = new Customer;
c1->name ="shivam";
c1->age=12;
cout<<c1->name <<endl;
cout<<c1->age;



    return 0;
}