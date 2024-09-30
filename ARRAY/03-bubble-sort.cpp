#include<iostream>
using namespace std;
int main(){

int arr[5] = {
    3,5,7,8,3
};

for(int i=0;i<4;i++){
bool swapping = 0;

for(int j=0;j<4;j++){
  if(arr[j]>arr[j+1]){
    swap(arr[j] ,arr[j+1]);
    swapping =1;
  }
}
//for best condition if swap occurs
if(swapping==0){
    break;
}
}


for(int i =0;i<5;i++){
    cout<<arr[i] <<" ";
}






    return 0;
}