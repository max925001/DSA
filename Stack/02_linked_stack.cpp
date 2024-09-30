#include<iostream>
using namespace std;

class Node{
public:
    int data ;
    Node* next;

    Node(int value){

        data = value;
        next = NULL;
    }

};

class Stack{
Node *top;
int size;
public:
Stack(){

    top = NULL;
    size = 0;
}

void push(int value){

Node *temp =new Node(value);

if(temp==NULL){
    cout<<"Stack Overflow"<<endl;
    return ;
}else{
    temp->next = top;
    cout<<"Pushed" <<value<<endl;
    top = temp;
    size++;


}
}


void pop(){
if(top==NULL){
    cout<<"Stack Underflow"<<endl;
    return ;
}else{
    Node* temp =top;
    cout<< "Popped" <<temp->data<<endl;
    top = top->next;
    delete temp;
    size--;
}


}


int peak(){

if(top==NULL){
    cout<<"Stack is Empty"<<endl;
    return -1;
}else{

    return top->data;
}


}


bool IsEmpty(){

if(top==NULL){
    return true;
}else{
    return false;
}
}

int IsSize(){
    return size;
}
};

int main(){

Stack s;
s.push(4);
s.push(5);
s.push(6);
s.push(7);
cout<<s.IsSize()<<endl;
s.pop();
cout<<s.peak()<<endl;





    return 0;
}