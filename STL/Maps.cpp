#include<bits/stdc++.h>
using namespace std;

void print(map<int,string> &m){
    cout << m.size() << endl;
    for(auto &pr : m){
        cout << pr.first << pr.second <<endl;
    } // Time complexity of accessing the values is nlog(n)
}

int main(){
    map<int, string> m;
    m[1] = "abc";  // O(nlog(n)) for n elements
    m[5] = "cdc";
    m[3] = "acd";
    m.insert({4, "afg"});
    m[6];
    auto it = m.find(3);  // O(log(n))
    m.erase(3);  // O(log(n))
    m.clear();
    // if(it == m.end()){
    //     cout << "no value";
    // }
    // else{
    //     cout << (*it).first << " " << (*it).second;
    // }
    print(m);
    // Unique Keys are stored and these keys are arranged in sorted order
}



//  auto it = m.find(7); 
//     m.erase(it);  

//     It will give Segmentation fault

// CORRECT CODE

//  auto it = m.find(7); 
// if(it != m.end())
//     m.erase(it);  



// map<string, string> m;  // s.size() * log(n)
// m["abcd"] = "abcd";