#include<iostream>
using namespace std;

bool palid(string str ,int start,int end ){

if(start>=end){
    return 1;
}
if(str[start]!=str[end]){
    return 0;
}
return palid(str,start+1,end-1);
}
void reverse_str(string &str ,int start1 ,int end1){

if(start1>=end1){
    return;
}
swap(str[start1],str[end1]);
reverse_str(str,start1+1 ,end1-1);


}
int main(){



string str ="ntman";

std::cout<<palid(str ,0,4)<<endl;
string str1 ="abcdefq";

reverse_str(str1 ,0,6) ;
std::cout<<endl;
std::cout<<"string: "<<str1;

    return 0;
}