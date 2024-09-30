#include<iostream>
using namespace std;

class Node{

public:
int data;
Node* next;
Node(int value){

    data =value;
    next=NULL;
}



};
int main(){


int arr[] ={2,3,4,5,7};

Node *head;
for(int i=0;i<5;i++){

if(head==NULL){
    head = new Node(arr[i]);

}else{

Node *temp ;
temp = new Node(arr[i]);
temp->next =head;
head = temp;
Node *tail =head;
while(tail->next!=NULL){

tail =tail->next;

}
tail->next =head;



}



}




    return 0;
}