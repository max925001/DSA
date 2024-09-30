#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){

    //push_back
    //push_front;
    //front;
    //back
    //pop_back
    //pop_front
    //insert
    //erase
    //clear
    //size

list<int>l1;
l1.push_back(39);
l1.push_back(40);
l1.push_back(59);
l1.push_front(12);

// for(int i:l1){

// cout<<i<<endl;
// }


for(auto it =l1.begin() ;it!=l1.end() ;it++){

cout<<*it<<endl;
}

//reverse
cout<<"Reverse"<<endl;
for(auto it =l1.rbegin() ;it!=l1.rend() ;it++){

cout<<*it<<endl;
}


    return 0;
}