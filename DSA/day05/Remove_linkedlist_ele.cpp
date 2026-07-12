// Remove linked list elements

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
//     ListNode* removeElements(ListNode* head, int val) {
        
//         ListNode*temp = head;
//         ListNode* ptr=NULL;

//         while(temp!=NULL){
//             if(temp->val==val){
//                 if(ptr==NULL){
//                     head=temp->next;
//                     delete temp;
//                     temp=head;
//                 }
//                 else{
//                     ptr->next=temp->next;
//                     delete temp;
//                     temp=ptr->next;
//                 }
        
//         }
//         else{
//             ptr=temp;
//             temp=temp->next;
//         }
      
//     }
//       return head;

//     }
// };


    