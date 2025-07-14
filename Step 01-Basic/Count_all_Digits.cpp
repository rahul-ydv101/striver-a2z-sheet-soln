#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n ;
    cin >> n ;
    int cnt = 0;
    while (n)
    {
        cnt++;
        n /= 10;

    }
    cout <<"No. of Digits = " << cnt;
}

int main()
{
    int t = 1;
    // cin >> t;

    while (t--)
    {

        solve();
    }
    return 0;
}