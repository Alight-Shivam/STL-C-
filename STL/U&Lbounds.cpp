// array, vector - Binary Search
// sets, maps, pairs - Tree Traversal

#include<bits/stdc++.h>
using namespace std;

// int main(){
//     int n;
//     cin >> n;
//     int a[n];
//     for(int i = 0; i < n; ++i){
//         cin >> a[i];
//     } 
//     sort(a, a+n);
//     for(int i = 0; i < n; ++i){
//         cout << a[i] << " ";
//     }
//     cout << endl;
// //     int *ptr = lower_bound(a, a+n, 5);
// //     if(ptr == (a+n)){
// //         cout << "Not found";
// //     }
// //     cout << (*ptr) << endl;

//     int *ptr = upper_bound(a, a+n, 5);
//     if(ptr == (a+n)){
//         cout << "Not found";
//     }
//     cout << (*ptr) << endl;
// }


// FOR VECTOR

// int main(){
//     int n;
//     cin >> n;
//     vector<int> a(n);
//     for(int i = 0; i < n; ++i){
//         cin >> a[i];
//     } 
//     sort(a.begin(), a.end());
//     for(int i = 0; i < n; ++i){
//         cout << a[i] << " ";
//     }
//     cout << endl;
// //     int *ptr = lower_bound(a, a+n, 5);
// //     if(ptr == (a+n)){
// //         cout << "Not found";
// //     }
// //     cout << (*ptr) << endl;

//     auto it = upper_bound(a.begin(), a.end(), 5);
//     if(it == a.end()){
//         cout << "Not found";
//     }
//     cout << (*it) << endl;
// }


// FOR SETS

int main(){
    int n;
    cin >> n;
    set<int> s;
    map<int,int> m;  //m.lower_bound, m.upper_bound
    for(int i = 0; i < (int)(1e6); ++i){
        // int x;
        // cin >> x;
        s.insert(rand());
    }
    for(int i = 0; i <(int)1e5; ++i){
    auto it = lower_bound(s.begin(), s.end(), rand());  // O(n)
    }
    auto it = s.lower_bound(rand());  // O(log(n))

    

    // cout << (*it) << endl;
}



// Random Number - rand()