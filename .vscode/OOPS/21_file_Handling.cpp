#include<iostream>
#include<fstream>
using namespace std;
int main(){

ofstream fout;
fout.open("sample.txt");

fout<<"Hello World"<<endl;
fout<<"Hello Rohan"<<endl;
fout<<"Hello Raja"<<endl;

fout.close();

ifstream fin;
fin.open("sample.txt");
string line;
while(getline(fin,line)){

cout<<line<<endl;
}

   fin.close(); 
}