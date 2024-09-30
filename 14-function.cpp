#include<iostream>
using namespace std;
bool prime_no(int num){


if(num ==1){
    return 0;
}
for (int i=2; i<num ;i++){

if(num%i==0){
    return false;
}else{
    return true;
}

}




}

int fact(int num){

if(num==0 || num==1){
    return 1;
}

    int ans = 1;
for(int i =1;i<=num;i++){
    ans = ans*i;
}
return ans;
}
int main(){

cout<<prime_no(6)<<endl;

cout<<prime_no(7)<<endl;
cout<<fact(9)<<endl;



    return 0;
}