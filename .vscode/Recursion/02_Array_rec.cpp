#include<iostream>
using namespace std;

void printA(int arr[] ,int n,int N){
    if(n==N){
        cout<<arr[n]<<" ";
        return;
    }
// cout<<arr[n]<<" ";

printA(arr,n+1,N);
cout<<arr[n]<<" "; // for reverse order


}
int add(int arra1 [],int n,int N){
    
if(n==N){
    return arra1[N];
}

return arra1[n]+add(arra1 ,n+1 ,N);
}

int minEle(int arr[] ,int n,int N){
if(n==(N-1)){
    return arr[n];
}
return min(arr[n] ,minEle(arr ,n+1,N));
    
}

int main(){



    int arra1[6] ={8,9,3,5,6,7};
    printA(arra1 ,0 ,5 );

cout<<"Sum: "<<
    add(arra1,0,5) <<endl;



cout<<"Minelement"<< minEle(arra1 ,0,6);   
}