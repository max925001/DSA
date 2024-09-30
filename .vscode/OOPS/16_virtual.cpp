#include<iostream>
using namespace std;


class Animal{

public:
// void speak(){
//     cout<<"Huhu";
// }
 virtual void speak(){
    cout<<"Huhu";
}

//pure virtual function iska direct object create nhi hoga
// virtual void speak() =0; 


};
class Dog:public Animal{

public:

void speak(){
    cout<<"Bark";
}

void roti(){

    cout<<"Roti";
}

};
int main(){

Animal *p;
p = new Dog();
p->speak();
// p->roti(); not accessible beacuse roti function Dog me define hai jab ki p pointer Animal ki value le rha hai
// agar dono class me same naam ke function hau tab hum virtual ka use karke usko acess kar sakte hau




//  Ab bat ye aati hai ki hum normal way se bhi speak ko access
//kar sakte the to humne aisa kyu nhi kiya see last ten min vedio again

    return 0;
}