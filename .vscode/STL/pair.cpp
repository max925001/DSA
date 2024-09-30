#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){

pair<string ,int>p;
// p =make_pair("rohit" ,30);
p.first = "rohit";
p.second = 30;

cout<<p.first<<" "<<p.second;


pair <string ,pair<int ,int>>pa;

// pa = make_pair("rohit" ,make_pair(5,6));
pa.first = "rohit";
pa.second.first = 5;
pa.second.second = 6;

cout<<pa.first<<" "<<pa.second.first<<" "<<pa.second.second;


    return 0;
}