#include<iostream>
#include<fstream>
using namespace std;
int main(){


// file ko open karna

//create object

ofstream fout;

//open file

fout.open("sample.txt"); // create karega agar present nhi huyi tab



//write kar sakte hai
fout<<"Hello World"<<endl;

fout.close(); // Resource relase kar paau


// file ko open 


ifstream fin;

fin.open("sample.txt");
// then read

char c;
// 
c =fin.get();
while(!fin.eof()){

cout<<c;
// fin>>c;
c =fin.get();

}
fin.close();
    return 0;
}