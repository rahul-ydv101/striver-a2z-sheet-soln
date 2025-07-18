//time complexity --> O(n)
//space complexity(auxillary)--> o(1)

#include <bits/stdc++.h>
using namespace std;

void solve(){

    int n ;
    cin >> n ;
    vector<int> arr(n);
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i] ;
    }


    int first = arr[0] ;
    for(int i = 0 ; i < n ; i++){
        arr[i] = arr[i+1] ;
    }
    arr[n-1] = first ;

    

    for(int i = 0 ; i < n ; i++){
        cout <<  arr[i] << " " ;
    }

cout <<endl ;

}

int main(){
    int t = 1;
    // cin >> t;

    while(t--){


        solve();


    }
    return 0;
}