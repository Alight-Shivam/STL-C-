// Sort - Quick sort, heap sort, insertion sort
// best sorting algorithm
#include<bits/stdc++.h>
using namespace std;
 
 int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    sort(a, a+n);
    for(int i = 0; i < n; ++i){
        cout << a[i] << endl;
    }
    cout << endl;
 }

 // FOR VECTORS

  int main(){
    int n;
    cin >> n;
    vector <int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());  // O(nlog(n))
    for(int i = 0; i < n; ++i){
        cout << a[i] << endl;
    }
    cout << endl;
 }