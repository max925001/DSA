#include<iostream>
using namespace std;
int main(){

int arr[4] ={4,-6,2,8};


for(int i=0 ;i<4;i++){

for(int j=0;j<4-i;j++){

cout<<" ";


for(int k =0;k<=i;k++){
    cout<<arr[k+j];
}

}

cout<<endl;

}





    return 0;
}