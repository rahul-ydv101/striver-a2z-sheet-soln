// //To Check is Sorted Only
//     for(int i = 0 ; i < arr.size()-1 ; i ++){
//         if(arr[i] > arr[i+1]){                       //Time comlexity -->> O(n)
//             return false ;
//         }
//          retrun true ;



//1752. Check if Array Is Sorted and Rotated by D (including D = 0)
#include <bits/stdc++.h>
using namespace std;

bool check(vector<int>& nums , int size) {

int count = 0;
for(int i = 0; i < size; i++) {
    if(nums[i] > nums[(i + 1) % size]) { // also check last to first
        count++;
    }
}
return count <= 1; // if all element are same count = 0 ;
}



bool solve(){

    int n ;
    cin >> n ;

    vector<int> arr;
    for(int i = 0 ; i < n ; i++){
        int x;
        cin>> x ;
        arr.push_back(x) ;
    }

    return check(arr ,n) ;


}
    

int main(){
    int t = 1;
    // cin >> t;

    while(t--){


        int ans = solve();
        cout << ans <<endl ;


    }
    return 0;
}