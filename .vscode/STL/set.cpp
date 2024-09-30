#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
int age;
string name;
// use for sorting
bool operator <(const Student &other ) const{
            return age<other.age;

        }

};
int main(){
// store only unique value
//store in sorted order
// for store in descending order set<int,greater<int>>s;
// set<int>s;
// s.insert(1);
// s.insert(7);
// s.insert(5);
// s.insert(5);// not print beacuse of already present

// for(auto it =s.begin() ;it!=s.end();it++){
// cout<<*it<<endl;
// }


// if(s.find(7) !=s.end()){
//     cout<<"present"<<endl;
// }



// if(s.count(7)){
//     cout<<"present"<<endl;
// }



// //delete

// s.erase(7);

// for(auto it =s.begin() ;it!=s.end();it++){
// cout<<*it<<endl;
// }





//Class in set


set<Student>s;

Student s1;
s1.age=10;
s1.name="shiva";
Student s2;
s2.age=20;
s2.name="kumar";
s.insert(s1);
s.insert(s2);


        

for(auto it =s.begin();it!=s.end();it++){
cout<<it->age<<" "<<(*it).name<<endl;
}

    return 0;
}