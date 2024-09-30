#include<iostream>
using namespace std;
class Human{
protected:
string name;
int age;
public:
Human(){

    cout<<" Human constructor is called"<<endl;
}

Human(string a,int b){

name=a;
age=b;


}
void work(){
    cout<<"I am working"<<endl;
}

};
class Student: public Human{


int roll_num;
int fees;


public:
Student(){

    cout<<" Student constructor is called"<<endl;
}

// Student(string a,int b,int c,int d){
Student(string a,int b,int c,int d):Human(a,b){
// name=a;
// age=b;
roll_num=c;
fees=d;
}
void Display(){
    cout<<name <<" "<<age <<" "<<roll_num <<" "<<fees<<endl;
}
};
int main(){

Student A;
Student A1("shivam" ,13,12,500);
A1.Display();
A1.work();


    return 0;
}