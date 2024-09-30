#include<iostream>
using namespace std;
bool linear_search(int arr[] ,int target ,int n){

if(n==-1){
    return 0;
}

if(arr[n] ==target){
    return 1;
}
linear_search(arr ,target ,n-1);

}


int Binary_Search(int arr[] ,int target ,int start ,int end){

if(start>=end){
    return 0;
}

int mid =start+(end-start)/2;


if(arr[mid]==target){
    return mid;
}

if(target<arr[mid]){

end =mid-1;
        Binary_Search(arr ,target ,start ,end);
}
else{
    start =mid+1;
     Binary_Search(arr ,target ,start ,end);
}

}

int main(){



int arr[6] ={1,3,6,7,8,9} ;
cout<<linear_search(arr,22,6)<<endl;
cout<<Binary_Search(arr,6,0,5)<<endl;


    return 0;
}