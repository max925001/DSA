#include<iostream>
using namespace std;
int main(){

// reverse an array

int arr[6] ={2,3,4,5,67,5};
int reverse[6];
int i =5;
int j =0;
while(i>=0)
{
    reverse[j] = arr[i];
    i--;
    j++;
}

i =0;
j=0;
while(i<=5){
    arr[i] =reverse[j];
    i++;
    j++;
}
for ( i = 0; i < 6; i++)
{
    cout<<arr[i]<<" ";
}

cout<<endl;

//Swap method 

int start = 0;
int end = 5;
int swaparray[6] ={2,4,5,7,8,6};
while(start<end){
    swap(swaparray[start],swaparray[end]);
    start++;
    end--;
}
for(int i =0;i<6;i++){
    cout<<swaparray[i]<<" " <<endl;
}





// fibbonacci
int a =0;
int b =1;
int sum =0;
for(int i =0; i<3;i++){
sum = a+b;
a = b;
b = sum;
cout<<sum<<" ";

}


    return 0;
}