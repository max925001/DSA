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

cout<<endl;



//Delete A starting node

cout<<"Delete A Starting Node"<<endl;
if(Head!=NULL){
    temp =Head;
    Head = Head->next;
    delete temp;
}

start1=Head;
while(start1!=NULL){
    cout<<start1->data<<" ";
    start1=start1->next;
}




// Delete from Last

cout<<"Delete from Last"<<endl;
if(Head!=NULL){

if(Head->next==NULL){
    Node * temp =Head;
    Head =NULL;
    delete temp;
}else{

    Node *current= Head;
Node *prev = NULL;
while (current->next!=NULL)
{
    prev = current;
    current = current->next;
}
cout<<current->data<<" " <<"delete data"<<endl;

delete current;
prev->next = NULL;
}



}

cout<<"Delete from end"<<endl;
start1=Head;
while(start1!=NULL){
    cout<<start1->data<<" ";
    start1=start1->next;
}



//Delete a particular node;

int y =1;

if(y==1){
    Node * Temp ;
    Temp =Head ;
    Head = Head->next;
    delete Temp;
}else{

Node * curr= Head;
Node * prev = NULL;
y--;
while (y--)
{
    prev = curr;
    curr = curr->next;
}

prev->next = curr->next;
delete curr;





}


cout<<"Delete Node at Particular Point"<<endl;
start1=Head;
while(start1!=NULL){
    cout<<start1->data<<" ";
    start1=start1->next;
}


    return 0;
}