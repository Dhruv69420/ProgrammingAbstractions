#include<math.h>
struct ListNode *detectCycle(struct ListNode *head) {
    
    
    struct ListNode* head1= (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* head2= (struct ListNode*)malloc(sizeof(struct ListNode));
    head2=head;
    head1=head;
    int flag=0;
    while(head!=NULL){
      
        if(head->val<-pow(10,5)){
            flag=1;
            head1=head;
            head->val=head->val+(2*pow(10,5)+1);
            head=head->next;
            while(head!=head1){
                head->val=head->val+(2*pow(10,5)+1);
                head=head->next;
            }
            break;
            
        }
        head->val=head->val-(2*pow(10,5)+1);
        head=head->next;
        
       
    }
    if(flag==1){
      while(head2!=head1){
        head2->val=head2->val+(2*pow(10,5)+1);
        head2=head2->next;
          
      }
        return head1;
   }
    else{
        while(head2!=NULL){
            head2->val=head2->val+(2*pow(10,5)+1);
            head2=head2->next;
        }
        return NULL;
    }
    
    
    
    
}
