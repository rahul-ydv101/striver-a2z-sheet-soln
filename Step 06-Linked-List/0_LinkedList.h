#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include<bits/stdc++.h>
using namespace std ;

class ListNode {

    public:

    int val ;
    ListNode *next ;

    ListNode(int x){

        this->val = x ;
        this->next = nullptr ;

    }

    ListNode(){

    this->next = nullptr ;

    }


};

// Utility functions *****************************************    
// list->FillList(list) ;
//{use // Utility function to avoid list-> ans also help in reusbility of that function}

    void InsertAtTailt(ListNode*& head , int val){

        ListNode* newnode = new ListNode(val) ;

        if(head == nullptr){
            head = newnode ;
            return ;
        }

        ListNode* mover = head ;

        while(mover->next != nullptr){  // if initially list have some items
            mover = mover->next ; // mover is ad last node
        }

        mover->next = newnode ;

    }

    void FillList(ListNode*& head){
        int n;
        cin >> n ;

        vector<int> nums(n) ; // size must define to use cin >>

        for(int i = 0 ; i < n ; i++){
            cin >> nums[i] ;
        }

        for(int it : nums){

            InsertAtTailt(head , it) ;

        }

        
        
    }
    
    void PrintList(ListNode*& head){

    if (head == nullptr) {
        cout << "List is empty" << endl;
        return;
    }

        ListNode* mover = head ;

        while(mover != nullptr){

            cout << mover->val <<" -> " ;
            
            mover = mover->next ;

        }

        cout <<"Null " << endl ;
    }


    #endif
