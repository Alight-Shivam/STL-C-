#include<bits/stdc++.h>
using namespace std;

int main(){
    string str = "ram ram ji";
    str[0] = 'a';   //treated as character
     cout<<str<<endl;
    cout << str.size() <<endl;
    for(int i =0; i < str.size();++i){
        cout << str[i] << endl;    
        }
    return 0;
//addition function works in string


// GETLINE FUNCTION
string str1;
getline(cin, str1);
cout << str1;


//Getline explained

int t;
cin >> t;
while(t--){
    string s;
    getline(cin, s);
    cout << s << endl;
} 

// its output can be made clear by us t++ after cin and cin.ignore() can also be used



//REVERSE OF A STRING
string str;
cin >> str;
string str_rev;
for(int i = str.size() -1 ; i>= 0; --i){
   // str_rev = str_rev + str[i];      THIS SHOULD BE AVOIDED BECAUSE HERE WE ARE ADDING CHARACTER IN STRING WHICH IS WRONG AND IT SHOULD ALSO BE AVOIDED BECAUSE OF TIME COMPLEXITY
    str_rev.push_back(str[i]);
}
cout << str_rev;



// converting big number into string

string s;
cin >> s;
int last_digit = s[s.size()-1] - '0';
cout << last_digit;
}