#include<iostream>
using namespace std;

class Node{
    public:
int data;
Node* next;

Node(int value){
data = value;
next = NULL;
}


};
int main(){


int arr[] ={1 ,3,4,5,6};
int x=3;
Node *Head;
Head =NULL;
Node *Tial;
Tial =NULL;
for(int i=0;i<5;i++){

if(Head ==NULL){

Head = new Node(arr[i]);
Tial = Head;
}else{

Tial->next = new Node(arr[i]);
Tial = Tial->next;
}





}

Node * start ;
start=Head;
while(start!=NULL){
    cout<<start->data <<" ";
    start=start->next;
}


Node *temp;
temp = Head;

for(int i=0;i<x-1;i++){


temp = temp->next;
}
Node * temp2;
temp2 =new Node(30);
temp2->next = temp->next;
temp->next = temp2;
cout<<endl;
Node * start1 ;
start1=Head;
while(start1!=NULL){
    cout<<start1->data<<" ";
    start1=start1->next;
}


    return 0;
}