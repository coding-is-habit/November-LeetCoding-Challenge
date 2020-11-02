ListNode* insertionSortList(ListNode* head) {
        if(head==NULL)
            return nullptr;
        if(head->next==nullptr)
            return head;
        ListNode* sorted=NULL;
        ListNode* temp=head;
        while(temp){
            ListNode* curr=temp;
            temp=temp->next;
            if(sorted==nullptr || sorted->val>curr->val)
            {
                curr->next=sorted;
                sorted=curr;
            }
            else{
                ListNode* curr_sorted=sorted;
                while(curr_sorted!=NULL){
                    if(curr_sorted->next==NULL || curr_sorted->next->val>curr->val){
                        curr->next=curr_sorted->next;
                        curr_sorted->next=curr;
                        break;
                    }
                    curr_sorted=curr_sorted->next;
                }
            }
        }
        return sorted;
    }