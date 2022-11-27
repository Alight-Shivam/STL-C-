#include<bits/stdc++.h>

using namespace std;


// void printVec(vector<pair<int,int>> &v){
//     cout << "size: " << v.size() <<endl;
//     for(int i = 0; i < v.size(); ++i){
//          cout << v[i].first << " " << v[i].second << endl;
//     }

// cout << endl;
// }

// Vectors of pairs

// int main() {
//      vector<pair<int,int>> v;
//     // = {{1,2}, {2,3}, {4,5}}
//     printVec(v);
//     int n;
//     cin>> n;
//     for(int i = 0;i<n ; ++i){
//         int x,y;
//         cin>>x >>y;
//         v.push_back({x,y});
//     }
//     printVec(v);
// }

// Vectors of arrays


void printVec(vector<int> &v){
    cout << "size: " << v.size() <<endl;
    for(int i = 0; i < v.size(); ++i){
         cout << v[i] << " " << endl;
    }

cout << endl;
}

// int main(){
//     int N;
//     cin >> N;
//     vector<int> v[N];
//     for(int i = 0; i < N; ++i){
//         int n;
//         cin >> n;
//         for (int j = 0; j < n; ++j)
//         {
//             int x;
//             cin >> x;
//             v[i].push_back(x);
//         }
//         for(int i = 0; i < N; ++i){
//             printVec(v[i]);
//         }
//     cout << v[0][1];
//     }
// }


// Vector of Vectors 


int main(){
    int N;
    cin >> N;
    vector<vector<int> > v;
    for(int i = 0; i < N; ++i){
        int n;
        cin >> n;
        vector<int> temp;
        for (int j = 0; j < n; ++j)
        {
            int x;
            cin >> x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }
    v[0].push_back(10);
    v.push_back(vector<int> ());
    
        for(int i = 0; i < v[N].size(); ++i){
            printVec(v[i]);
        }
    cout << v[0][1];
    }





// other way of using it


//  int N;
//     cin >> N;
//     vector<vector<int> > v;
//     for(int i = 0; i < N; ++i){
//         int n;
//         cin >> n;
//         v.push_back(vector<int> ());
//         for (int j = 0; j < n; ++j)
//         {
//             int x;
//             cin >> x;
//             v[i].push_back(x);
//         }
//     }
    
//         for(int i = 0; i < v[N].size(); ++i){
//             printVec(v[i]);
//         }