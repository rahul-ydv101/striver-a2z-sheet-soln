#include <bits/stdc++.h>
using namespace std;

void solve()
{

    int n;
    cin >> n;
    int i = 2;

    if(n<=1){
        cout << "Not Prime";
        return ;
    }
    while (i < n)
    { /* In competitive programming and interviews, using i * i <= n 
     is considered a standard optimization for prime checking*/

        if (n % i == 0)
        {
            cout << " not prime ";
            return; // function breaks and retune by printing  not prime
        }

        i++;
    }
    cout << "prime"; // if me return nhi hua toh prime hoga
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