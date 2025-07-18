// Brute --> Store non Zero in Temp Renter the values from Temp to Arr Rest with Zeroes


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

    int i = 0;
    while (i < arr.size()){

        if (arr[i] != 0)  i++;
        else break;

    }

    int j = i+1 ;

    while(j < arr.size()){
        if(arr[j] != 0){

            swap(arr[i] , arr[j]) ;
            i++ ; 
            j++ ;

        }
        else 
        j++ ;
    }

    for(auto it : arr){

        cout << it << " " ;

    }
}

int main(){
    int t = 1;
    // cin >> t;

    while (t--){

        solve();
    }
    return 0;
}