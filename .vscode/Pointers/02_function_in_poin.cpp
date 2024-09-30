#include<iostream>
using  namespace std;

void inc(int *nums){
*nums = *nums++;

}

void doubleA(int p[]){
for(int i =0;i<5;i++){
    p[i]=p[i]*2;
}

}


void swap(int *a,int *b){

int temp = *a;
*a = *b;
*b = temp;


}
void reference(int &b){
b =b+4;
}
int main(){



int num =20;
  num++;
cout<<num<<endl;
inc(&num);
cout<<num<<endl;


int arr[5] ={1,2,3,4,5};
doubleA(arr);
for(int i =0;i<5;i++){
    cout<<arr[i]<<endl;
}



int a =10;
int b=20;
swap(&a,&b);
cout<<a<<" "<<b<<endl;

int c =10;
reference(c);
cout<<"ref"<<c;
    return 0;
}