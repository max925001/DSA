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


cout<<"printing"<<endl;

Node *start = head;
while(start!=NULL){

cout<<start->data<<" ";

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



cout<<"Insert AT end"<<endl;
Node *start1 = head;
while(start1!=NULL){

cout<<start1->data<<" ";

start1 = start1->next;
}



    return 0;
}