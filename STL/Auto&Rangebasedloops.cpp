#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {2,3,5,6,7};

    for (int &value : v){
        value++;
        // cout << value << " ";
    }
    for (int value : v){
        cout << value << " ";
    }
    cout << endl; 
    
auto a = 1.0;
cout << a << endl;
}

// Similarly you can do it for pairs
