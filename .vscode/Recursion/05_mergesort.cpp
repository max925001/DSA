#include<iostream>
#include<vector>
using namespace std;




 void merge(int arr[], int l, int m, int r)
    {
        
        vector<int>temp(r-l+1);
         int left =l;
         int right =m+1;
         int index =0;
         while(left<=m && right<=r){
             if(arr[left]<=arr[right]){
                 temp[index] =arr[left];
                 left++;
                 index++;
             }
             else{
                 temp[index] =arr[right];
                 right++;
                 index++;
             }
         }
         
         while(left<=m){
             temp[index] =arr[left];
             index++;
             left++;
         }
         while(right<=r){
             temp[index] =arr[right];
             index++;
             right++;
         }
         
         
         index=0;
         while(l<=r){
             
             
             arr[l]=temp[index];
             l++;
             index++;
         }
         
    }





 void mergeSort(int arr[], int l, int r)
    {
        if(l == r){
            return ;
        }
        
        int mid = l+(r-l)/2;
        // Left portion
        mergeSort(arr , l,mid);
        mergeSort(arr, mid+1 ,r);
        merge(arr ,l, mid,r);
    }
int main(){




int arr[] ={4 ,1, 3, 9, 7};
mergeSort(arr ,0,4);
for(int i =0;i<5;i++){

    cout<<arr[i];
}









    return 0;
}