// brute -->
// Better --> Hashing 


//using set what is set ;


//Optimal>>
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
    int x = 0 ;
    for(int i = 0 ; i < n ; i++){
       if(arr[i] != arr[i+1]) //socho last element kissse compair horha
       arr[x++] = arr[i] ;
    }

    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << "Uneque Element :  " << x ;
    cout << endl ;

}
int main(){
    int t = 1;
    // cin >> t;

    while(t--){


        solve();


    }
    return 0;
}