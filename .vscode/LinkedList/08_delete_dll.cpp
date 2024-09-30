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





// Delete at start

if(head==NULL){

cout<<"List is empty"<<endl;
}else{

Node *temp =head;
head = head->next;

delete temp;
if(head){ // for handling if single head node present


head->prev = NULL;
}

}

std::cout<<"Delete at start"<<endl;


Node *start3 = head;
while(start3!=NULL){

std::cout<<start3->data<<" ";

start3 = start3->next;
}





// Delete at end




std::cout<<"Delete at end"<<endl;

if(head==NULL){

cout<<"List is empty"<<endl;
}
else{

if(head->next==NULL){


Node *temp =head;
head = NULL;
delete temp;
}

else{

Node *cur1 = head;

while(cur1->next!=NULL){


cur1 = cur1->next;



}

cur1->prev->next =NULL;

delete cur1;

}
}



std::cout<<"Delete at end"<<endl;

Node *start4 = head;
while(start4!=NULL){

std::cout<<start4->data<<" ";

start4 = start4->next;

}




// Delete at any point



std::cout<<"Delete at any point"<<endl;


int y =8;

if(y==1){
Node* temp = head;
head = head->next;
head->prev =NULL;
delete temp;

}else{




Node * cur2 =head;
while(--y){

cur2 = cur2->next;


}

if(cur2->next==NULL){

    cur2->prev->next =NULL;
    delete cur2;
    
}
else{
cur2->prev->next = cur2->next;

cur2->next->prev = cur2->prev;


delete cur2;}

}


Node*cur6 =head;
while(cur6!=NULL){
    cout<<cur6->data <<" ";
    cur6 =cur6->next;
}




    return 0;
}