//time complexity --> O(n)
//space complexity(auxillary)--> o(1)


#include <bits/stdc++.h>
using namespace std;

void solve(){

    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }


    int sum = 0 , sumi = ((arr.size())*(arr.size()+1))/2 ;
    for(int i = 0 ; i < arr.size() ; i++){
        sum += arr[i] ;
    }

    cout << sumi - sum ;

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