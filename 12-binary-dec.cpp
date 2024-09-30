#include<iostream>
using namespace std;
int main() {

// //decimal to binary
// int ans =0;
// int rem =0;
// int mul =1;
// int num;
// cout<<"Enter your num";
// cin>>num;

// while(num>0){

// //     rem =num%2;
// //     num =num/2;
// //     ans =rem*mul +ans;
// //     mul =mul*10;


// //another aproach

// rem =num&1;
// num=num>>1;
// ans =rem*mul +ans;
//    mul =mul*10;



//  }

// cout<<ans;





//Bimary to decimal


int rem =0;
int ans =0;
int mult =1;
int num;
cout<<"Enter your number";
cin>>num;

while(num>0){

rem =num%10;
ans =rem*mult+ans;
mult =mult*2;
num=num/10;


}

cout<<ans;


    return 0;
}