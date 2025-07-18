// Brute --> Sort and return last second element 

/*
// Optimal Ans __(ans in  1 triversal)

//Ttime Complexity --> O(n)
//Space Complexity --> O(1)

#include <bits/stdc++.h>
using namespace std;

void solve(){

    int n ;
    cin >> n ;
    vector<int> arr(n);
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i] ;
    }

        int max1 = INT_MIN ;
        int max2 = INT_MIN ;
        for(int i = 0 ; i < arr.size() ; i++){
            if (arr[i] > max1){
                
            max2 = max1 ; // this should be at first becouse max1 is not updated yet
            max1 = arr[i] ;
            
                
            }
            
            else if(arr[i] < max1 && arr[i] > max2)
                max2 = arr[i] ;
        }
        
        if(max2 != INT_MIN)
        cout <<"Second Largest is = " << max2 ;

        else cout << "No Second Largest Element" ;
        	

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


/*
Time complexity -->O(2n) == O(n)
Space Conplexity -->O(1) {auxillary}
better 

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n ;
    cin >> n ;
    vector<int> arr(n);
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i] ;
    }
    
    int maxi = INT_MIN  , maxi_2 = INT_MIN;
    for(int i = 0 ; i < n ; i++){
        if(arr[i] > maxi) {
            maxi = arr[i] ;
        }
    }
    for(int i = 0 ; i < n ; i++){
        if(arr[i] > maxi_2 && arr[i] != maxi) {
            maxi_2 = arr[i] ;
        }
    }
    
    cout << maxi_2 ;
   	

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