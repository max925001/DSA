#include<iostream>
using namespace std;

int main(){

// int arr[5] ={3,4,2,6,9};

// for(int i =0;i<5;i++){

// for(int j=0;j<5;j++){

// if(arr[j]>arr[j+1]){

//     swap(arr[j],arr[j+1]);
// }

// }


// }

// for(int i=0;i<5;i++){

//     cout<<arr[i]<<" ";
// }





//Selection sort


int arr[6] ={4,6,2,7,1,8};

for(int i=0;i<5;i++){ // ye round hai

int index =i;
for(int j= i+1; j<6;j++)
{
    if(arr[j]<arr[index]){
        index =j;
    }

    
}

swap(arr[index] ,arr[i]);
}



for(int i =0;i<6;i++){
    cout<<arr[i] <<" ";
}




    return 0;
}