//without using set
// using two pointers
#include <bits/stdc++.h>
using namespace std;
//Time Complexity --> O(n+m)
//Space Complexity --> O(1)
void solve(){


    int n , m ;
    cin >> n >> m ;
    vector<int> a(n);
    vector<int> b(m);

    for(int i = 0 ; i < n ; i++){
        cin >> a[i] ;
    } 
    cout << endl ;
    
    for(int i = 0 ; i < m ; i++){
        cin >> b[i] ;
    }
    
    
        
        vector<int> uni ;
        
        int i = 0 , j = 0 ;
        
        while(i < a.size() && j < b.size()) { //use && both have to be true always
            
            if(a[i] < b[j]){
                
                if(uni.empty()||uni.back() != a[i]){ 
                uni.push_back(a[i]);// push only if back element is unequal to current
                }
                
                i++ ; // if duplicate then i++ hence not inside nested if
                
            }
            
            else if(a[i] > b[j]){
                                
                if( uni.empty() || uni.back() != b[j]){
                uni.push_back(b[j]);
                }
                
                j++ ;
                
                
            }
            
            else{
                
                if(uni.empty() || uni.back() != a[i]){
                uni.push_back(a[i]); // push any element and go  , then other comparision handle cause we handle the duplicates
                }
                
                i++ ;
                
                
            }
        }
        
        while(i < a.size()){
                            
                if(uni.empty() ||uni.back() != a[i]){
                uni.push_back(a[i]);
                }
                
                i++ ;
            
        }
        
        while(j < b.size()){
                                            
                if(uni.empty() || uni.back() != b[j]){
                uni.push_back(b[j]);
                }
                
                j++ ;
            
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



/*//using set --> insert only uneque in sorted order doesnot depend what you yar inserting
#include <bits/stdc++.h>
using namespace std;

void solve(){

    set<int> uni ;   //using set insert unique element in sorted order
        
    int i = 0 ;
    int j = 0 ;
        
    while(i < a.size()){
                
    uni.insert(a[i]) ;
    i++ ;

    }
        
    while(j < b.size()){       
    uni.insert(b[j]) ;
            
    j++ ;
            
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

*/