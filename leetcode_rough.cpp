// #include<iostream>
// #include<climits>
// #include<vector>
// #include<string>
// #include<cmath>
// #include<algorithm>
// using namespace std;
// int main(){ṇ
//         int  digit , nums;
//         cout << "enter your testcase " << endl ;
//         cin>> nums ;
//         if(nums == 0)
//         return 0 ;
//         while(nums >= 9){
//             nums = nums % 10 ;
//             nums += digit ;
//             cout << "nums is = " << " " <<nums << endl;
//         }
//         cout << "nums is = " << nums <<endl;
//         cout << "nums is = " << nums <<endl;     
//     return 0;
// }

// #include<iostream>
// #include<climits>
// #include<vector>
// #include<string>
// #include<cmath>
// #include<algorithm>
// using namespace std;
// int missingNum(vector<int>& arr) {
// int size = arr.size() + 1 ;
// int sum1 = (size*(size + 1))/2 ;
// int i = 0  , sum2 = 0 ;
// while(i < size){
//      sum2 += arr[i] ;
//      i++ ;
// }
// return sum1 - sum2 ;
// }
// int main(){
//         vector<int> arr={1 , 2 , 4 , 5 , 6};
//         cout << "value of arr.size()" << " " << arr.size() <<endl ;
//        int miss = missingNum(arr) ;
//        cout << "the missing number is = " << miss ;
//     return 0;
// }


// rortate array by k places
// iske 2 aur tarike hoteh hai ili last se k tk ko rev then bachhe ko reverse then pure ko ko reverse 
// 2nd way i+k%size
// #include <iostream>
// using namespace std ;
// int main() {
//      int arr[7] ={1,2,3,4,5,6,7} ;
//      int k ;
//      int size = sizeof(arr)/sizeof(int) ;
//      cout << "enter the value how much to rotate = " ;
//      cin >> k ;
//           int copy[10] = {0,0,0,0,0,0,0,0,0,0} ;
//           for(int i = 0 ; i < size ; i++){
//                copy[i] = arr[i] ;
//           }
//           cout << "copy array ka element " << endl ;
//           for(int i = 0 ; i < size ; i++){
//                cout << copy[i] << " " ;
//           }
//           for(int i = size-1 ; i >= 0 ; i--){
//                if(i>k) 
//                arr[(i-(k+1))] = copy[i] ;
//                else if(i<=k)
//               arr[i+k] = copy[i]  ;
//           }
//           cout << "/n the rotated array is " ;
//       for(int i = 0 ; i < size ; i++){
//         cout << arr[i] << " " ;
//       }
//     return 0;
// }


// sort 0 and 1 
// #include<iostream>
// #include<climits>
// #include<vector>
// #include<string>
// #include<cmath>
// #include<algorithm>
// using namespace std;
// int main(){
//      int arr[7] = {0,0,1,0,0,1,1} ;
//      int size = sizeof(arr)/sizeof(int) ;
//      int i = 0 ;
//      int j = size - 1 ;
//      while(i<j){
//           if(arr[i] == 0 && arr[j] == 1){
//                swap(arr[i] , arr[j]) ;
//                i++ ;
//                j-- ;
//           }
//           else if(arr[i] == 1)
//           i++ ;        
//           else if(arr[j] == 0)
//           j-- ;
//           } 
//      cout << "printing the sorted array = " << endl ;
//      for (int i = 0; i < size; i++)
//      {
//          cout << arr[i] << " " ;
//      }   
//      return 0;
// }







