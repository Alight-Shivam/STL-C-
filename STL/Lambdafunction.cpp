#include<bits/stdc++.h>
using namespace std;

bool is_positive(int x){
    return x > 0;
}

int main(){

    // lambda function
    auto sum = [](int x, int y){return x+y;};
    // cout << [](int x, int y){return x+y;}(4, 7) << endl;
    cout << sum(2,3);

    // all_of 
    vector<int> v = {2,3,5};
    cout << all_of(v.begin(), v.end(), 
    [](int x){return x > 0}) << endl; 
    cout << any_of(v.begin(), v.end(), 
    [](int x){return x > 0}) << endl; 
    cout << none_of(v.begin(), v.end(), 
    [](int x){return x > 0}) << endl; 

    cout << all_of(v.begin(), v.end(), 
    is_positive);
}