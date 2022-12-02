// Normal Sets
// Unordered Sets
// Multisets

#include<bits/stdc++.h>
using namespace std;

void print(set<string> &s){
    for(string value : s){
        cout << s << endl;
    }
    for(auto it = s.begin(); it != s.end(); ++it){
        cout << (*it) << endl;
    }
}

int main(){
set<string> s;
s.insert("abc");   // O(log(n))
s.insert("zsdf");
s.insert("bcd");
auto it = s.find("abc");

}