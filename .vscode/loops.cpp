#include <bits/stdc++.h>
using namespace std;

int main()
{
    // for{initialisation; conditions; operations}

    // for (int i = 1; i <= 10; cout << i++ << endl)
    //     return 0;



//         int n;
//         cin>>n;
//         for (int i=1 ;i<=n ;++i){
//             for(int j=1 ; j<= i;++j){
//                 cout <<"*$";
//             }
//             cout << endl;
//         }
//         return 0;
// }


// To check for all test cases we can use while loop as well as for loop
 int t;
 cin >> t;
 while(t--){
//  for(int test = 0; test < t; ++test)
    
    int n;
        cin>>n;
        for (int i=1 ;i<=n ;++i){
            for(int j=1 ; j<= i;++j){
                cout <<"*$";
            } 
            cout << endl;
        }
 }
 return 0;
}
