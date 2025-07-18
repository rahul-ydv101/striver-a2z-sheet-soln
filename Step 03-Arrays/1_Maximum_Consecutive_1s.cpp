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



    int maxi = 0, i = 0, cnt = 0;

    while (i < n){

        if (arr[i] == 1)
            cnt++;
            //maxi = max(cnt , maxi)//when can write hare compaire for all ones comes

        else{

            cnt = 0 ;
            // maxi = max(cnt, maxi);
            //if  its written here if 0 not comes at last. then will not update max for last commings ones
        }

        maxi = max(cnt, maxi);

        i++ ;

    }



    cout << maxi ;
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