# include<iostream>
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
int main(){

    // Node A1(4);  node is create data->4 and next ->null

//Dynamic way to create a node

Node *Head ;
// Head = new Node(4);
Head=NULL;


int arr[] = {2,4,5,6,7,8};

// cout<<Head->data<<" "<<Head->next;



// Insert node at starting

for(int i =0;i<6;i++){


if(Head==NULL){
    Head = new Node(arr[i]);
}
else{
    Node * temp ;
    temp = new Node(arr[i]);
    temp->next =Head;
    Head= temp;

}



}


// Printing value
Node *temp = Head;
while(temp!=NULL){
std::cout<<temp->data<<" ";
temp =temp->next;
}

// Insert At end 
Node *Head1;
Head1 =NULL;
Node *Tail ;
Tail = NULL; // for second way 

for(int i=0;i<6;i++){


if(Head1==NULL){
    Head1 = new Node(arr[i]);
    Tail = Head1;
}else{
    // Node * tail ;
    // tail =Head1;

    // while(tail->next!=NULL){
    //     tail =tail->next;

    // }
    // Node * temp ;
    // temp = new Node(arr[i]);
    // tail->next =temp;
    // temp->next =NULL;
    Tail->next = new Node(arr[i]);
    Tail = Tail->next;
}
}

std::cout<< "Printing When Insert at end "<<endl;

Node *temp1 = Head1;
while(temp1!=NULL){
std::cout<<temp1->data<<" ";
temp1 =temp1->next;
}


    return 0;
}