#include<iostream>
using namespace std;
int main(){
//logical operator


// char name = 'b';
// if(name=='a' || name=='e' || name=='i' ||name=='o' ||name=='u'){
//     cout<<"vowels";
// }else{
//     cout<<"consonant";
// }

//Bitwise Operator

// & and operator

int ans = 2&3;
cout<< "and"<<ans <<endl;

ans =2|3;

cout<<"or"<<ans <<endl;

ans  =2^3;

cout<<"xor"<<ans <<endl;

ans =6<<1;

cout<<"left shift"<<ans <<endl;
ans =6>>1;
cout<<"right shift"<<ans <<endl;

ans =~6;
cout<<"not"<<ans <<endl;




    return 0;
}