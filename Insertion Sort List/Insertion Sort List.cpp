class Solution {
public:
    ListNode* searchInsert(ListNode* head,int val){
        ListNode* pre=head;
        ListNode* next=head->next;
        while(next!=NULL&&next->val<=val){
            pre=next;
            next=next->next;
        }
        return pre;
    }
    ListNode* insertionSortList(ListNode* head) {
        if(head==NULL||head->next==NULL)return head;
        ListNode* dummy;
        dummy->val=-1;
        dummy->next=NULL;
        ListNode* new_next;
        ListNode* pre;
        ListNode* next;

        while(head!=NULL){
            next=head->next;
            pre=searchInsert(dummy,head->val);
            new_next=pre->next;
            head->next=new_next;
            pre->next=head;
            head=next;
        }
        return dummy->next;

    }
};
