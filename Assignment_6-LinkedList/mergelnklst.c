struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){
    if(l1==NULL){
        return l2;
    }
    else if(l2==NULL){
        return l1;
    }
    else{
    struct ListNode* temp= (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* temp1= (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* head= (struct ListNode*)malloc(sizeof(struct ListNode));
    head=l1;
    int f=0;
    temp=l2;
    while(temp!=NULL&&l1!=NULL){
        if(f==0&&temp->val<=l1->val){                
            temp=temp->next;
            l2->next=l1;
            
                head=l2;
                f++;
            
            if(l2->val<l1->val){
                l1=l2;
            }
            l2=temp;
               
        }
        else if(l1->next==NULL&&temp->val>l1->val){
            f++;
            l1->next=l2;
            break;
           
        }
        else if(temp->val<=l1->next->val){
            f++;
            temp=temp->next;
            temp1=l1->next;
            l1->next=l2;
            l1=l1->next;
            l1->next=temp1;
            l2=temp;
        }
        else{
            l1=l1->next;
        }
        
    }
    return head;
    }
}
