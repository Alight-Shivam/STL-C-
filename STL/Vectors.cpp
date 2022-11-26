#include<bits/stdc++.h>
using namespace std;

void printVec(vector<int> &v){
    cout << "size: " << v.size() <<endl;
    for(int i = 0; i<v.size(); ++i){
        // v.size() -> O(1)
         cout << v[i] << " ";
    }
v.push_back(2);
cout << endl;
}

// int main(){
//     vector<int> v;
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; ++i)
//     {
//         int x;
//         cin>>x;
//         printVec(v);
//         v.push_back(x);  // Time Complexity is O(1)
//     }
//     printVec(v);
// }


// int main(){
//     vector <int> v(10, 3);
//     v.push_back(7);
//     v.push_back(6);
//     printVec(v);
    
//     v.pop_back();  //O(1)
//     printVec(v);
// }



int main(){
    vector<int> v;
    v.push_back(7);
    v.push_back(6);

    vector<int> &v2 = v;   //&v2 can also be used // Time Complexity is O(n)
    v2.push_back(5);

    printVec(v);
    printVec(v);
    printVec(v2);
}


// taking input as string in vector
// void printVec(vector<string> &v)

// int main(){
//     vector<string> v;
//     int n;
//     cin >> n;
//     for(int i = 0; i < n; ++i){
//         string s;
//         cin >> s;
//         v.push_back(s);
//     }
//     printVec(v); 
// }