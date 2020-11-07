int length(ListNode* head){
        if(head==NULL)
            return 0;
        return 1+length(head->next);
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int lenL1=length(l1),lenL2=length(l2);
        int pos=0;
        bool hasRem=false;
        pair<ListNode*,ListNode*> store[100];
       // if l2>l1
        if(lenL1<lenL2)
        {
            swap(l1,l2);
            swap(lenL1,lenL2);
        }
        while (lenL1--) {
            // storing the explored value, having l2 advance only when len2 >= len1
            store[pos++] = {l1, lenL2 <= lenL1 ? NULL : l2};
            l1 = l1->next;
            l2 = lenL2 <= lenL1 ? l2 : l2->next;// advance only when l2<l1
        }
        //
        while(pos--){
            l1=store[pos].first;
            l2=store[pos].second;
            l1->val=l1->val+hasRem+(l2?l2->val:0);
            hasRem=l1->val>9;
            l1->val=l1->val%10;
        }
        if(hasRem){
            ListNode* temp = new ListNode(1);
            temp->next=l1;
            l1=temp;
        }
        return l1;
    }