#include<iostream>
using namespace std;
int main(){


int arr[4][4] ={1,2,3,4,5,6,7,8,4,2,6,8,9,2,4,8};
int brr[4][4] ={1,2,3,4,5,6,7,8,4,2,6,8,9,2,4,8};
 int ans[4][4];
for(int i =0 ;i<4;i++){

for(int j =0;j<4;j++){

 ans[i][j] = arr[i][j]+brr[i][j];
 cout<<ans[i][j]<<" ";


}
  
  cout<<endl;
}





    return 0;
}
