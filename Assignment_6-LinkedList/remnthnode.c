struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    struct ListNode* temp=(struct ListNode*)malloc(4*sizeof(struct ListNode));
    struct ListNode* temp2=(struct ListNode*)malloc(4*sizeof(struct ListNode));
    temp=head;
    temp2=head;
    int l=0;
    while(temp!=NULL){
        l++;
        temp=temp->next;
    }
    n=l-n+1;
    if(n==1){
        head=head->next;
    }
    else{
        
    int c=0;
           
        while(temp2!=NULL){
            ++c;
            if(c+1==n){
                temp2->next=temp2->next->next;
            }
            temp2=temp2->next;
        }
    }
    return head;
}
