// brute --> Use Set to Store array Elements restor in  array {Cant use hashing sequence is imp}


    //Clean code Using Two Pointers

    #include <bits/stdc++.h>
    using namespace std;
    
    void solve(){
    

    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    } 
    
    int i = 0 ;
    for(int j = 1 ; j < n ; j++){
        if(arr[j] != arr[i]){
            arr[i++] = arr[j] ;
        }

        cout << "Uneque Element will be = " << i+1 ;
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















/*
//Optimal>> Messy 
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

    if (n > 0) {
        arr[x++] = arr[0]; //first element  will always included {uneque}
    }

    //start compairin from 1 0
    for(int i = 1 ; i < n - 1 ; i++){
       if(arr[i] != arr[i+1]) //loop upto n-1 last element cant compair 
       arr[x++] = arr[i] ;
    }

    arr[x++] = arr[n - 1]; // last element always included either is repeating or not

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
    */

