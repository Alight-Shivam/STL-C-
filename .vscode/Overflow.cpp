#include<bits/stdc++.h>
using namespace std;
int main()
{
  // int a =100000;
  // int b =100000;
  // int c=a*b;
  // cout << c << endl;
  // int mx = INT_MAX ; //INT_MAX is an indefined function which gives max value of that data type
  // cout<<mx+1;



  // int a = 100000;
  // int b = 100000;
  // long long int c = a * 1LL * b;
  // cout << c << endl;
  // return 0;



  // PRECISION ERRORS (double,float)

  double a = 100000;
  double b = 100000;
  double c = a*b;
  c = 1e24;
  cout << fixed<< setprecision(0)<<c << endl;
  return 0;
}


