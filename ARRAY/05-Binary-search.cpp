#include<iostream>
using namespace std;
int BinarySearch(int arr[] ,int key,int n){

int start =0;
int end =n-1;
int mid = (start+end)/2;

while(start<=end){
if(arr[mid] ==key){
   return mid;
}
if(arr[mid]>key){
end = mid-1;
}

else{
start= mid+1;
}

mid = (start+end)/2;
}

return -1;
}
int main(){





int arr[8] ={1,3,5,6,7,8,9,10};

 cout<<BinarySearch(arr ,9 ,8);




    return 0;
}