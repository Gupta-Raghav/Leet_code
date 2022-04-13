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
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* one, ListNode* two) {
        if(one ==NULL){
            return two;
        }
        if(two ==NULL){
            return one;
        }
        ListNode *newHead = NULL;
        if(one-> val <=two->val){
            newHead = one;
            newHead->next = mergeTwoLists(one->next,two);
        }
        else{
            newHead = two;
            newHead-> next = mergeTwoLists(one, two->next);
        }
        return newHead;
    }
};