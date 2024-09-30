#include<iostream>
using namespace std;
void fun(int **p1){
*p1= *p1+1;

}
int main(){


int a =10;
int *ptr = &a;
int **ptr2 = &ptr;



cout<<"Address of a:"<<ptr2 <<endl ;
cout<<"value of a:"<<**ptr2 <<endl;
cout<<"value of a:"<<ptr +4 <<endl;


cout<<"Address of a:"<<ptr <<endl ;
fun(ptr2);


cout<<"Address of a:"<<ptr <<endl ;

    return 0;
}