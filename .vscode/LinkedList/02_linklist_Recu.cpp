#include<iostream>
using namespace std;
class Node{
public:
int data;
Node* next;

Node(int value){
data =value;
next = NULL;

}




};
Node *createLinkedList(int arr[] ,int index, int size){

if(index==size){
    return NULL;
}

Node * temp;
temp = new Node(arr[index]);
temp->next = createLinkedList(arr,index+1,size);
return temp;

}



Node *CreateLinkedListEnd(int arr[] ,int index ,int size,Node*prev){

if(index==size){
    return prev;
}

Node *temp;
temp = new Node(arr[index]);
temp->next=prev;
return CreateLinkedListEnd(arr ,index+1,size,temp);

}
int main(){

int arr[] ={2,3,5,6,7};
Node *Head;
Head =NULL;
 Head = createLinkedList(arr ,0,5);

Node *Start ;
Start =Head;
while(Start!=NULL){
    cout<<Start->data <<" ";
    Start =Start->next;
}


Node * Head1;
Head1 =NULL;
Head1 =CreateLinkedListEnd(arr,0,5,NULL);


cout<<endl;
Node *Start1 ;
Start1 =Head1;
while(Start1!=NULL){
    cout<<Start1->data <<" ";
    Start1 =Start1->next;
}

}