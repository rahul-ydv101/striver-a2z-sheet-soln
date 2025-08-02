#include <bits/stdc++.h>
#include "0_LinkedList.h"
using namespace std;

int SizeofList(ListNode* head){

    if(head == nullptr)  return 0 ;

    ListNode* mover = head ;
    int count = 0 ;

    while(mover != nullptr){
        count++ ;
        mover = mover->next ;
    }

    return count ;

}

void solve(){

    ListNode* head = nullptr ;
    FillList(head) ;
    PrintList(head) ;

    cout << "Size of List = " << SizeofList(head) ;



}

int main(){
    int t = 1;
    // cin >> t;

    while(t--){


        solve();


    }
    return 0;
}