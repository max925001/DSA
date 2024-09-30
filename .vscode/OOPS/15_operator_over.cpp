#include<iostream>
using namespace std;
class Complex{

int real ;
int imag;
public:
Complex(){

}
Complex(int real ,int imag){
this->real =real;
this->imag=imag;

}
void Display(){

cout<<real<<" + "<<imag<<"i"<<endl;
}


Complex operator+(Complex &C){


Complex ans;

ans.real =real+C.real;
ans.imag =imag+C.imag;
}


};
int main(){


Complex C1(2,3);
Complex C2(2,3);


Complex C3 =C1+C2;


C3.Display();









    return 0;
}