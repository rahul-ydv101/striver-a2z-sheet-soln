#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n ;
    cin >> n ;

    int rev =  0 , digit = 0;
    while(n){
        digit = n % 10 ;
        rev = rev * 10 + digit ;
        n /= 10 ;
    } 	

    cout << rev ;

}

int main(){
    int t = 1;
    // cin >> t;

    while(t--){


        solve();


    }
    return 0;
}