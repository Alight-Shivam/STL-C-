#include<bits/stdc++.h>
using namespace std;

// int main(){
//     vector<int> v = {2,3,5,6,7};
//     for (int i = 0; i < v.size(); i++)
//     {
//         cout << v[i] << " ";
//     }
//     cout << endl;
//     vector<int> ::iterator it = v.begin();
//     for(it = v.begin(); it != v.end(); ++it){
//         cout << (*it) << endl;
//     }
// }


// ITERATORS FOR PAIRS

int main(){
    vector<pair<int,int> > p = {{1,2},{2,3},{3,4}};
    vector<pair<int,int> > :: iterator it;
    for(it = p.begin(); it != p.end(); ++it){
        cout << (it->first) << " " << (it->second) << endl;
    }
    // for(it = p.begin(); it != p.end(); ++it){
    //     cout << (*it).first << " " << (*it).second << endl;
    // }
}