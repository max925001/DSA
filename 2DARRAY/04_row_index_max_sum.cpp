#include<iostream>
using namespace std;
int main(){


int arr[5][4] ={3,4,7,8,2,8,4,9,5,54,2,2,7,3,0,8,2,8,9,1};
int sum =-7;
int index =-1;
for(int i =0;i<5;i++){

int total =0;
for(int j=0;j<4;j++){

    total+=arr[i][j];
  
}
  cout<<total;
if(sum<total){
    sum =total;
    index =i;
}
cout<<endl;
}


cout<<index;




    return 0;
}