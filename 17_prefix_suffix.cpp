#include<iostream>
using namespace std;
bool subarray(int arr[] ,int n){



int total_sum =0;

for(int i =0;i<n ;i++)
{

    total_sum+=arr[i];
}
int prefix =0;
int ans;
for(int i=0 ;i<n-1;i++){

    prefix+= arr[i];
    ans =total_sum -prefix;
    if(prefix ==ans){
   return 1;
    }

}



    return 0;

}


int main(){

int n =8;

int arr[n] ={3,4,-2,5,8,20,-10,8};


 cout<<(arr ,8);



}