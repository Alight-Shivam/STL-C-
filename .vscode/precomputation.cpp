/*Given T Test cases and in each test a number N. Print its factorial for each test case % M
where M = 10^9+7.

Constraints
1 <= T <= 10^5
1<= N <= 10^5
*/

#include <bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
const int N = 1e5 + 10;
long long fact[N];

int main()
{
    fact[0] = fact[1] = 1;
    for (int i = 2; i < N; ++i)
    {
        fact[i] = fact[i - 1] * i;
    }
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << fact[n] << endl;
    }
}

/*
Given array of N integers. Given Q queries and in each query given a number X, print count of that number in array

Constraints
1<=N <= 10^5
1 <= Q <= 10^5
*/
#include <bits/stdc++.h>
using namesace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        int ct = 0;
        for (int i = 0; i < n; ++i)
        {
            if (a[i] == x)
            {
                ct++;
            }
        }
        cout << ct << endl;
    }
}