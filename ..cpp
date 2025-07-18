//binery search first and last position of element in sorted array;
#include <bits/stdc++.h>
 using namespace std;
        int FirstPosition(vector<int>& nums, int target){
            int position = -1 ;
            int start = 0 , end = nums.size() - 1 ;
            while(start <= end){
               int mid = end + (start - end)/2 ;
                if(nums[mid] == target){
                    position = mid - 1 ;
                    end = mid - 1 ;
                }
                else if(nums[mid] < target)
                start = mid ;
                else 
                end = mid - 1 ;
            }
            
            return position ;
        }
        int LastPosition(vector<int>& nums, int target){
            int position = -1 ;
            int start = 0 , end = nums.size() - 1 ;
            while(start <= end){
               int mid = end + (start - end)/2 ;
                if(nums[mid] == target){
                    position = mid ;
                    start = mid + 1 ;
                }
                else if(nums[mid] < target)
                start = mid + 1 ;
                else 
                end = mid - 1 ;
            }
            return position ;
        }     
int main(){
    vector<int> nums = {5,7,7,8,8,10} ;
    int target = 8 ;
     vector<int>ans;
     ans.push_back(LastPosition(nums , target)) ;
     ans.push_back(FirstPosition(nums , target)) ;
     for (int i = 0; i < 2; i++)
     {
        cout << ans[i] << " " ;
     } 
    return 0;
 }