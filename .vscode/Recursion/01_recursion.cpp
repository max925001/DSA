#include<iostream>
using namespace std;


void fun(int n){

if(n==0){
    cout<<"Happy Birthday"<<endl;
    return;
}
cout<<n<<"days left for birthday"<<endl;

fun(n-1);
}
void num(int n){
    if(n==1){
        cout<<n<<endl;
        return;
    }
    num(n-1);
    cout<<n<<endl;


}


void even(int n, int N){

if(n==N){
    if(N%2==0){

cout<<N<<endl;
return;


    }

    else{
        return;
    }

  
}


  if(n%2==0){
        cout<<n<<endl;
    }

    even(n+1,N);
}


void even_sec(int n){

if(n==2){
    cout<<n<<endl;
    return;
}

even_sec(n-1);
if(n%2==0){
    cout<<n<<endl;
}





}




int fact(int n){



    if(n==0 || n==1){
        return 1;
    }

    return n*fact(n-1);
}



int power(int n){
if(n==1){
    return 2;
}
return 2*power(n-1);

}





int fibo(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }

   int ans= fibo(n-1)+fibo(n-2) ;
return ans;


}
int main(){

// fun(4);
// num(5);

// even(1,10);
// even_sec(10);

// int ans =fact(5);
// cout<<ans <<endl;


// int ans1 =power(5);
// cout<<ans1;




cout<<fibo(4) <<endl;

}