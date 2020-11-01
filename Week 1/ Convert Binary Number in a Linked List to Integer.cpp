class Solution {
public:
    int getDecimalValue(ListNode* head,int res=0) {
        return head==nullptr?res:getDecimalValue(head->next,res*2+head->val);
    }
};