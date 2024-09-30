#include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;

int main(){



// multiset<int>s; //store duplicate  value but in sorted order
// s.insert(20);
// s.insert(10);
// s.insert(10);
// s.insert(10);
// s.insert(10);
// s.insert(10);
// s.insert(10);
// for(auto it =s.begin() ;it!=s.end();it++){

// cout<<*it<<endl;
// }


//unordered set

unordered_set<int>s;

s.insert(20);
s.insert(10);
s.insert(10);
s.insert(30);
s.insert(40);
s.insert(10);
s.insert(10);
for(auto it =s.begin() ;it!=s.end();it++){

cout<<*it<<endl;
}



    return 0;
}