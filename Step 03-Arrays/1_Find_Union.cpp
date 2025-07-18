#include <bits/stdc++.h>
using namespace std;

void solve(){


    int n , m ;
    cin >> n >> m ;
    vector<int> arr1(n);
    vector<int> arr2(m);

    for(int i = 0 ; i < n ; i++){
        cin >> arr1[i] ;
    } 
    cout << endl ;
    
    for(int i = 0 ; i < m ; i++){
        cin >> arr2[i] ;
    }
    
    

    vector<int> uni ;
    int i = arr1[0] ;
    int j = arr2[0] ;
    while(i < arr1.size() && j < arr1.size()){

        if(arr1[i] < arr2[j]){
            uni.push_back(arr1[i]) ;
            i++ ;
        }


        if(arr1[i] > arr2[j]){
        uni.push_back(arr1[i]) ;
        j++ ;
        }


        else{


            


        }


    }

    for(auto it : uni){

        cout << it << " ";
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