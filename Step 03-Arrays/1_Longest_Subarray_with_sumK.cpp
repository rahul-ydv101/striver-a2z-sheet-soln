/*
**************************** VALID FOR ALL THE CASES CONTAINS (+VE,-VE ,ZEROES)*************************************

//Brute --> 3 nested loop --> 2 for find all subarray 1 for Sum
//better --> 2 nested loop--> same but sum can be calc by previoussum + present element

*/

// optimal----|
//  using hashmap  + reverse thinking
// Time Complexity --> O(n*1) {O(n*n)  = O(n^2) very rare if use unordredmap} [[O(n*logn)] or normal maps]
// Space Complexity --> O(n) every cases
//
#include <bits/stdc++.h>
using namespace std;

void solve()
{

#include <bits/stdc++.h>
  using namespace std;

  void solve(){
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++){
      cin >> arr[i];
    }

    int k;
    cout << "Enter the value of K: ";
    cin >> k;

    unordered_map<int, int> pri; // prefix sum -> first index
    int sum = 0, longest = 0;

    for (int i = 0; i < n; i++){
      sum += arr[i];

      if (sum == k){
        longest = i + 1; // from index 0 to i (whole subarray)
      }

      if (pri.find(sum - k) != pri.end()){
        longest = max(longest, i - pri[sum - k]); // length of subarray
      }

      // store only the first occurrence of prefix sum
      if (pri.find(sum) == pri.end()){
        pri[sum] = i;
      }
    }

    cout << "Longest Subarray Length = " << longest << endl;
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