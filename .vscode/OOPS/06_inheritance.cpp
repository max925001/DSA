#include<iostream>
using namespace std;
class Human{

private:
int a;
protected: // not used out side class 
int b;
public:
int c;


void fun(){
    a=10;
    b=20;
    c=30;
}

};
int main(){

Human A1;
A1.c =10;
A1.fun();






    return 0;
}