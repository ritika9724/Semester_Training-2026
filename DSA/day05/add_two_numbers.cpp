// Add Two Numbers

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
//     ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

//         int num1 , num2;
//         int carry = 0;
//         ListNode *temp = new ListNode(0);
//         ListNode *tell = temp;


//         while((l1!=nullptr) || (l2!=nullptr) || (carry!=0)){
//         num1 = l1!=NULL?l1->val:0;
//         num2 = l2!=NULL?l2->val:0;
//         int sum = num1 + num2 + carry;
//         int digit = sum%10;
//         carry = sum/10;

//         ListNode*ptr = new ListNode(digit);
//         tell->next = ptr;
//         tell =tell->next;
//         l1 = l1 !=NULL?l1->next:NULL;
//         l2 = l2 !=NULL?l2->next:NULL;
//         }
//         return temp->next;

//     }
// };