// Remove Duplicates from Sorted List

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

// class Solution {
// public:
//     ListNode* deleteDuplicates(ListNode* head) {
//         ListNode*temp = head;

//         while(temp!=nullptr && temp->next!=nullptr){
//             if(temp->val == temp->next->val){

//         ListNode*ptr = temp->next;
//         temp->next = ptr->next;
//         delete ptr;
//         }
//         else{
//             temp = temp->next;
//         }
//     }
//     return head;
//     }
// };