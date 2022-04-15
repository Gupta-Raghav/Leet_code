/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        unordered_set<ListNode*> table;
        while(head!=NULL){
            if(table.find(head) !=table.end()) return true;
            table.insert(head);
            head = head -> next;
        }
        return false;
    }
};