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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int car = 0;
        ListNode *temp = new ListNode();
        ListNode *tempI = temp;
        while((l1 || l2)||car){
            int res =0;
            if(l1!=NULL){
                res  += l1 -> val;
                l1 = l1->next;
            }
            if(l2!=NULL){
                res += l2-> val;
                l2 = l2->next;
            }
            res += car;
            car = res /10;
            ListNode *node = new ListNode(res % 10); 
            temp -> next = node; 
            temp = temp -> next; 
        }
        return tempI-> next;
    }
};