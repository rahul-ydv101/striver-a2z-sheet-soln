#include <bits/stdc++.h>
using namespace std;

void solve(){

    int n ;
    cin >> n ;
    vector<int> arr(n);
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i] ;
    }
    
    int maxi = INT_MIN ;
    for(int i = 0 ; i < n ; i++){
        if(arr[i] > maxi) {
            maxi = arr[i] ;
        }
    }
    
    cout << maxi ;

}

int main(){
    int t = 1;
    // cin >> t;

    while(t--){


        solve();


    }
    return 0;
}