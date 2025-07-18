//brute --> 2 loop compair { time complexity -->O(n) }
//better --> hashing{ time complexity -->O(logn) }



// using hashing
#include <bits/stdc++.h>
using namespace std;

void solve()
{

    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    unordered_map<int,int> map ;
    //using unordered_map make tine complexity --> O(1) allcase except a rear case where complexity becomes(O(n))

    for (int i = 0; i < n; i++){
        map[arr[i]] = map[arr[i]] + 1 ;
    }

    for(auto it: map){
        if(it.second == 1)
        cout << it.first ; 
    }

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


// //optimal{time complexity --> O(n)  Auxillary space complexity O(1)}

// #include <bits/stdc++.h>
// using namespace std;

// void solve(){

//     int n ;
//     cin >> n ;
//     vector<int> arr(n);
//     for(int i = 0 ; i < n ; i++){
//         cin >> arr[i] ;
//     }


//     int i = 0 , ans = 0 ;

//     while(i < n){

//         ans ^= arr[i] ;
//         i++ ;
//     }
    
//     cout << ans ;

// }

// int main(){
//     int t = 1;
//     // cin >> t;

//     while(t--){


//         solve();


//     }
//     return 0;
// }