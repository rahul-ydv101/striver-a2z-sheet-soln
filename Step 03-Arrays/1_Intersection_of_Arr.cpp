#include <bits/stdc++.h>
using namespace std;

void solve(){

        sort(nums1.begin() , nums1.end()) ;
        sort(nums2.begin() ,nums2.end()) ;

        vector<int> inters ;

        int i = 0 , j = 0 ;
        while(i < nums1.size() &&j < nums2.size()){

            if(nums1[i] < nums2[j]) i++ ;
            else if(nums1[i] > nums2[j]) j++ ;

            else{
                if(inters.empty() || inters.back() != nums1[i]){ // Wrong if(inters.back() != num1[i] || inters.empty())
                    //****************Because if it empty inters.begin() checks first by if an throw error ***************************
                    inters.push_back(nums1[i]) ;
                }
                i++ ;
                j++;
            }


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