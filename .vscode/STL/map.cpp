#include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;

int main(){



map<int,int>m;
m.insert(make_pair(20,30));
m.insert(make_pair(20,310));
m.insert(make_pair(40,320));
m.insert(make_pair(50,330));
m.insert(make_pair(80,360));
m[200] =30;
// m[20] =70; // update value of key 20
cout<<"map"<<endl;

for(auto it = m.begin() ; it!=m.end();it++){

cout<<it->first<<" "<<it->second<<endl;
}


//search 
if(m.count(900)){

cout<<"present"<<endl;
}


//delete
m.erase(20);
for(auto it = m.begin() ; it!=m.end();it++){

cout<<it->first<<" "<<it->second<<endl;
}




//multimap

cout<<"multimap"<<endl;

multimap<int,int>m1;
m1.insert(make_pair(20,30));
m1.insert(make_pair(20,310));
m1.insert(make_pair(40,320));
m1.insert(make_pair(50,330));
m1.insert(make_pair(80,360));
// m1[200] =30; //not allow in multimap

for(auto it = m.begin() ; it!=m.end();it++){

cout<<it->first<<" "<<it->second<<endl;
}





//unordered map
cout<<"unordered_map"<<endl;

unordered_map<int,int>m2;
m2.insert(make_pair(50,30));
m2.insert(make_pair(20,310));
m2.insert(make_pair(40,320));
m2.insert(make_pair(90,330));
m2.insert(make_pair(80,360));
m2[200] =30;
// m2[20] =70; // update value of key 20




for(auto it = m2.begin() ; it!=m2.end();it++){

cout<<it->first<<" "<<it->second<<endl;
}
    return 0;
}