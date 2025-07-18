/*NOTE
// Brute

Time Complexity --> O(n+d)        {O(d) + O(n-d) + O(d)}
space compexity --> O(d)     due to temp {Auxillary}

// n = size of array 
use Temp vector(D) store zero to n
shift to left from d to  n
now put temp to there places n-k to n {use int j = 0 }

// Better --> just do same minor change with using j

*/


/*
 // Quit Better
// By Using Extra Spaces
// Time complexity --> O(n)
// Space Complexity --> 0(n)
#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n ;
    cin >> n ;
    vector<int> nums(n);
    for(int i = 0 ; i < n ; i++){
        cin >> nums[i] ;
    }
    int d;
    cout << "Value of D " <<endl;
    cin>>d ;

    vector<int> temp(n);
    for(int i = 0 ; i < n ; i++){
        temp[i] = nums[i] ;
    } 

    for(int i = 0 ; i < n ; i++){

    nums[i] =  temp[(i+d) % n] ; // USe for Left Rotaion

    // nums[(i+d) % n] = temp[i] ;  // Use for Right Rotation
    }

    //Output
    for(auto it : nums) cout << nums[it] << " " ;
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



// Optimal Using Extra Space { But Time Complexity will Increase Slightly }

#include <bits/stdc++.h>
using namespace std;

void solve(){

    int n ;
    cin >> n ;
    vector<int> nums(n);
    for(int i = 0 ; i < n ; i++){
        cin >> nums[i] ;
    }
    int d;
    cout << "Value of D " <<endl;
    cin>>d ;

       d = d % n ; //dont do  k = n % k {*****}
    
    // Have to Give Itrator in reverse()
    reverse(nums.begin() , nums.begin()+(n-d)) ; 
    reverse(nums.begin()+(n-d) , nums.end()) ;
    reverse(nums.begin() , nums.end()) ;

    for(auto it : nums)  cout << it << " " ;
    

}

int main(){
    int t = 1;
    // cin >> t;

    while(t--){


        solve();


    }
    return 0;
}