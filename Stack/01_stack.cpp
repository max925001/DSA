#include<iostream>
using namespace std;

class Stack{
int *arr;
int size;
int top;

public:


bool flag; // for handling negative value

Stack(int s){

size=s;
top=-1;
arr = new int[size];
flag =1;
}

void push(int value){

if(top ==size-1){
    cout<<"Stack overflow"<<endl;
    return ;
}else{
    top++;
    cout<<top;
    arr[top] =value;
    cout<<"Push"<<" "<<arr[top]<<" " <<"into the stack"<<endl;
    flag =0;
}







}



void pop(){

if(top==-1){
    cout<<"Stack underflow"<<endl;
    return ;
}else{
 cout<<"popped"<<arr[top]<<"from the stack"<<endl;
    top--;
    if(top==-1){
        flag =1;
    }
   
}



}


int peek (){


if(top==-1){
    cout<<"Stack underflow"<<endl;
    return  -1 ;
}else{
    return arr[top];
}

}


bool IsEmpty(){

if(top==-1){
    return true;
}else{

    return false;
}

}



int Issize(){

return top+1;

}


};
int main(){

Stack S(5);
S.push(1);
S.push(2);
S.push(3);
S.push(4);
S.push(5);
S.push(6);
// S.pop();
// cout<<S.IsEmpty() <<endl;
// cout<<S.Issize()<< endl;
// int value = S.peek();
// if(S.flag ==0){
//     cout<<value<<endl;
// } 














    return 0;
}