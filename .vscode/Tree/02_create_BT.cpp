#include<iostream>
using namespace std;

class Node{
    public:
int data;
Node*left;
Node*right;


Node(int val){

    data = val;
    left = NULL;
    right = NULL;
}



};


Node *BinaryTree(){

int x;
cout<<"Enter your value"<<endl;
cin>>x;

if(x==-1){
    return NULL;
}   
Node *temp = new Node(x);

temp->left = BinaryTree();

temp->right = BinaryTree();
return temp;





}



// pre-order traversal

void pre_order(Node* root){

    if(root == NULL)
    return ;

    cout<< root->data<<" ";

    pre_order(root->left);

    pre_order(root->right);

}

void in_order(Node* root){

    if(root == NULL)
    return ;
    in_order(root->left);
    cout<< root->data<<" ";
    in_order(root->right);

}

int main(){

cout<<"Enter the root node"<<endl;

Node *root ;

root = BinaryTree();


// print using pre_order
cout<<"preoreder"<<endl;
pre_order(root) ;
cout<<endl;
cout<<"In-oreder"<<endl;
in_order(root);


}