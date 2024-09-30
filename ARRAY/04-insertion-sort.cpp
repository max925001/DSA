#include<iostream>
using namespace std;
int main(){

int arr[5] = {3,5,6,2,7};
for(int i = 0;i<4;i++){

for(int j=i+1;j>0;j--){

if(arr[j] <arr[j-1]){
    swap(arr[j] ,arr[j-1]);
}
else{
    break;
}
}


}


for(int i =0;i<5;i++){
    cout<<arr[i]<<" ";
}



    return 0;
}
