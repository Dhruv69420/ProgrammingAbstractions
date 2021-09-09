struct ListNode* rotateRight(struct ListNode* head, int k){
   struct ListNode* h=(struct ListNode*)malloc(sizeof(struct ListNode));
    h=head;
    int c=0;
    if(k==0||head==NULL||head->next==NULL){
        return head;
    }
    
    while(1){
        if(h->next==NULL)
            h=head;
        if(h->next->next==NULL){
            h->next->next=head;
            head=h->next;
            h->next=NULL;
            h=head;
            c++;
            if(c==k){
                break;
            }
            
        }
        h=h->next;
    }
    return h;

}
