// Time Complexity is O(n) in case of Vectors and arrays

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int min = *min_element(v.begin(), v.end());
    // Ye Pointer return krta hai
    cout << min << endl ;
    int max = *max_element(v.begin(), v.end());
    // Ye Pointer return krta hai
    cout << max << endl;
    int sum = accumulate(v.begin(), v.end(), 0);
    cout << sum << endl;
    int ct = count(v.begin(), v.end(), 6);
    cout << ct << endl;
    int element = *find(v.begin(), v.end(), 2);
    cout << element << endl;
    reverse(v.begin(), v.end());
    for (auto val : v){
        cout << val << " ";
    }
    cout << endl;
    string s = "abcdefghij";
    reverse(s.begin(), s.end());
    cout  << s << endl;
}



// int main(){
//     int n;
//     cin >> n;
//     int v[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> v[i];
//     }
//     int min = *min_element(v, v+n);
//     cout << min << endl;
// }