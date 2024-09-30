#include<iostream>
#include<queue>
using namespace std;



class Node{

public:
int data;
Node* left;
Node* right;

    Node(int val){

        data = val;
        left = NULL;
        right = NULL;

    }




};
int main(){


        int x;
        int first;
        int second;

        queue<Node *>q;
cout<<"Enter the root element"<<endl;
        cin>>x;

        Node *root = new Node(x);

        q.push(root);

        // build binary tree

        while(!q.empty()){

            Node * temp =q.front();

            q.pop();
cout<<"Enter left child value"<<endl;
cin>>first; //left side
if(first!=-1){

temp->left =new Node(first);  

q.push(temp->left);

}
cout<<"Enter right child value"<<endl;
cin>>second; // right side

if(second!=-1){

temp->right =new Node(second);

q.push(temp->right);
}

        }



    return  0;
}