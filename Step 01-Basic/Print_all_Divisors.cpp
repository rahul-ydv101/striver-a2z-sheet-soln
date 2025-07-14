#include <bits/stdc++.h>
using namespace std;

void solve(){

    int n ;
    cin >> n ;
    int i = 1;
    while(i <= n){

        if(n % i == 0){
            cout << i << " ";
        }
        i++ ;

    }

}

int main(){
    int t = 1;
    // cin >> t;

    while(t--){


        solve();


    }
    return 0;
}