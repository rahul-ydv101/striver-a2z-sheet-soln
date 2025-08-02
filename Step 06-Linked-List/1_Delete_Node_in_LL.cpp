//Time Complexity = O(1) 
//Space complexity = O(1)

#include <bits/stdc++.h>
#include "0_LinkedList.h"
using namespace std;

void solve(){ 
//You are given the node to be deleted node. You will not be given access to the first node of head

//TEST CASE ___>>>>> ip =  4 -> 5 -> 1 -> 9 (given node = 5)   {head is not given}
//                   op = 4 -> 1 -> 9 

    ListNode *list = nullptr;
    FillList(list) ;

    PrintList(list) ;

    ListNode* given(list->next) ;// {giving node with the use of head of list}

    cout << "After Deletion" << endl ;

    given->val = given->next->val ;
    given->next = given->next->next ;

    PrintList(list) ;




}

int main(){
    int t = 1;
    // cin >> t;

    while(t--){


        solve();


    }
    return 0;
}