#include<iostream>
using namespace std;
class Node{
public:
int data;
Node *next;
Node*prev;
Node( int value){
data = value;

next =NULL;
prev =NULL;


}

};

int main(){
int arr[] ={2,3,4,5,6};
Node *head =NULL;

for(int i =0;i<5;i++){





// Insert At start
if(head==NULL){

head = new Node(arr[i]);



}else{

Node*temp ;
temp = new Node(arr[i]);
temp->next = head;
head->prev = temp;
head = temp;




}




}


// printing


std::cout<<"printing"<<endl;

Node *start = head;
while(start!=NULL){

std::cout<<start->data<<" ";

start = start->next;
}



// Insert At End


for(int i=0 ;i<5;i++){




if(head==NULL){

head = new Node(arr[i]);

}else{

Node *cur=head;
while(cur->next!=NULL){
cur = cur->next;
}


Node*temp ;
temp = new Node(arr[i]);
temp->prev = cur;
cur->next = temp;
}



}



std::cout<<"Insert AT end"<<endl;
Node *start1 = head;
while(start1!=NULL){

std::cout<<start1->data<<" ";

start1 = start1->next;
}





// Insert Any point 

// int x =1;
int x=10;

if(x==0){
if(head==NULL){
    head = new Node(4);
}else{



Node *temp = new Node(10);

temp->next = head;
head->prev =temp;
temp->prev =NULL;
head = temp;
}
}else{




Node *cur = head;

x--;
while(x--){

cur = cur->next;



}
// last node
if(cur->next==NULL){
Node * temp ;
temp = new Node(5);
temp->prev = cur;
cur->next = temp;
temp->next = NULL;

}else{

Node* temp = new Node(10);

temp->next = cur->next;
cur->next =temp;
temp->prev =cur;
temp->next->prev =temp;
}

}



std::cout<<"Insert Any point"<<endl;


Node *start2 = head;
while(start2!=NULL){

std::cout<<start2->data<<" ";

start2 = start2->next;
}







    return 0;
}