#include<iostream>
#include<vector>
#include<fstream>
#include<algorithm>
using namespace std;
int main(){


vector<int> arr(5);
cout<<"Enter the input: ";
for(int i =0;i<5;i++){
    cin>>arr[i];
}

ofstream fout;
fout.open("sample.txt");
fout<<"Original data"<<endl;
for(int i=0;i<5;i++){
    fout<<arr[i]<<" ";
}

fout<<"Sorted data"<<endl;

sort(arr.begin(),arr.end());

for(int i=0;i<5;i++){
    fout<<arr[i]<<" ";
}
fout.close();

}