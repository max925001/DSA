#include<iostream>
using namespace std;
int main(){


int a ,b;
cout<<"Enter a and b"<<endl;
cin>>a>>b;
// if(b==0){
//     cout<<"Invalid input"<<endl;
//     return 0;
// }




try{  
    if(b==0)
    throw "Divide by zero is not possible";
    int c =a/b;   
cout<<c<<endl;


}
catch(const char *e){

cout<<"Exception Occured :"<<e<<endl;
}






}