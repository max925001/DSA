#include<iostream>


using namespace std;
class Human{
    // public:
    protected:
string name;
public:
int age;
int weight;



};


class Student :public Human{
int roll_num;
int fees;
public:
void fun(string n){
    name =n;
}
void get(){
    cout<<name<<endl;
}

};
int main(){

Student A1;
// A1.age=10;
// cout<<A1.age;
A1.age=10;
A1.weight =40;
cout<<A1.weight<<endl;
A1.fun("shivam");
A1.get();








    return 0;
}