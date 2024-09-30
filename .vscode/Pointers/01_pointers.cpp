#include<iostream>
using namespace std;
int main(){




int a =10;
int *ptr =&a;
cout<<"Address of a:"<<ptr <<endl ;
cout<<"value of a:"<<*ptr;
cout <<"size of ptr" <<sizeof(ptr)<<endl;
int b =40;
ptr = &b;
cout<<"Address of b:"<<ptr <<endl ;
cout<<"value of b:"<<*ptr <<endl;


// Pointer in Array
int arr[5] ={1,2,3,4,5};

// Print the address of first element
cout<<"Address of arr[0]:"<<&arr[0]<<endl;
cout<<"Address of arr[0]:"<<arr<<endl;
cout<<"Address of arr[1]:"<<arr+1<<endl;

int * ptr1 = arr;
cout<<"Address of arr[0]:"<<ptr1 <<endl ;
cout<<"value of arr[0]:"<<*ptr1 <<endl;
cout<<"value of arr[1]:"<<*(ptr1+1) <<endl;
cout<<"value of arr[2]:"<<*(ptr1+2) <<endl;
cout<<"value of arr[3]:"<<*(ptr1+3) <<endl;
cout<<"value of arr[4]:"<<*(ptr1+4) <<endl;


// print all address of array
for(int i =0;i<5;i++){
    cout<<arr+i<<endl;
}
for(int i =0;i<5;i++){
    cout<<"Address:"<<ptr+i<<endl;
}

// print value of array using pointer

for(int i =0;i<5;i++){
    cout<<"value"<<ptr1[i]<<endl;
}





// Char array in pointer

char arr1[5]= "1234";
char *ptr2 = arr1;
cout<<"Address of arr1[0]:"<<ptr2 <<endl ;
cout<<"value of arr1[0]:"<<*ptr2 <<endl;
cout<<"value of arr1[1]:"<<*(ptr2+1) <<endl;
cout<<"value of arr1[2]:"<<*(ptr2+2) <<endl;
cout<<"value of arr1[3]:"<<*(ptr2+3) <<endl;
cout<<"value of arr1[4]:"<<*(ptr2+4) <<endl;
cout<<arr1<<endl;


cout<<"Address of arr1[0] void:"<<(void*)ptr2 <<endl ;
cout<<"Address of arr1[0] void:"<<(void*)arr1<<endl ;



char name = 'a';
char *ptr3 = &name;
cout<<"Address of name:"<<(void *)ptr3 <<endl ;
cout<<"value of name:"<<*ptr3 <<endl;




    return 0;
}