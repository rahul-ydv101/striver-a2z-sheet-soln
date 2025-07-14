//check palindrome number{ex. 101 1001 121 etc}
//this code is not vaid for num like 010 , 0220
#include <bits/stdc++.h>
using namespace std;

void solve(){

    int n , dig;
    cin >> n ;
     int temp = n , rev = 0 ;// want 2 same to campair rev and normal

     while(n){

        dig = n % 10 ;
        rev = rev * 10 + dig ;
        n /= 10 ;

     }

     rev == temp ? cout << "yes\n" : cout << "no" ;

}

int main(){
    int t = 1;
    cin >> t;

    while(t--){


        solve();
        


    }
    return 0;
}