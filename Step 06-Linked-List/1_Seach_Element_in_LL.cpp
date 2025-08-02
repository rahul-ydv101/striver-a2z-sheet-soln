#include <bits/stdc++.h>
#include "0_LinkedList.h"
using namespace std;

bool FindinList(ListNode*& head , int key){

    if(head == nullptr)  return 0 ;

    ListNode* mover = head ;

    while(mover != nullptr){

        if(mover->val == key) return true ;

        mover = mover->next ;

    }

    return 0 ;

}

void solve(){

    ListNode* head = nullptr ;
    FillList(head) ;
    PrintList(head) ;

    int key ;

    cout << "Enter Element to Search" << endl ;
    cin >> key ;

    cout << "Element is Present = " << (FindinList(head , key) ? "Yes" : "No") ;



}

int main(){
    int t = 1;
    // cin >> t;

    while(t--){


        solve();


    }
    return 0;
}