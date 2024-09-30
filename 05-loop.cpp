#include<iostream>
using namespace std;
int main(){

    //print a to z
    /*
    for(int i =97; i<=122; i++){
char c =i;
cout<< c<<endl;


    }
    for(char name ='a';name<='z' ;name++){
        cout<<name;
    }
*/

//Multiplication
/*
int value;
cout<<"Enter value";
cin>>value;
for(int i =1;i<=10;i++){


cout<<value*i<<endl;


}
*/
//Prime

/*
int prime;
cout<<"Enter your number";
cin>>prime;
if(prime<2){
    cout<<"Not prime";
    return 0;
}
else{
for(int i=2;i<prime;i++){
    if(prime%i==0){
        cout<<"Not Prime";
        return 0;
    }

}
cout<<"Prime";


}
*/


//Fabonacci series

int a =0;
int b=1;
for(int i=0;i<10;i++){
int sum =a+b;
cout<<sum <<" ";
a=b;
b=sum;


}











    return 0;

}
