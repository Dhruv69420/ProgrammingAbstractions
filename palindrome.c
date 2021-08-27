#include <stdio.h>
#include <stdlib.h>
struct toad* temp;
struct ListNode {
    int val;
    struct ListNode *next;
};
int isPalindrome(struct ListNode* head){
    struct ListNode* temp=head;
    int i=0;
    while(temp!=NULL){
        i++;
        temp=temp->next;
   }
    
    int arr[i/2];
    int c=0;
    int flag=0;
    while(head!=NULL){
        if(c<i/2){
           arr[c]=head->val;
           c++;
           head=head->next;
        }
        
        else{
            if(c==i/2)
		    if(c%2!=0)
			    head=head->next;
		    --c;
	    
           if(head->val!=arr[c]){
               flag=1;
               break;
           } 
            c--;
            head=head->next;
        }
        
    }
    if(flag==0)
        return 1;
    else 
        return 0;
}
int main()
{
    struct ListNode* head=(struct ListNode*)malloc(5*sizeof(struct ListNode));
    struct ListNode* temp=(struct ListNode*)malloc(5*sizeof(struct ListNode));
    for(int i=0;i<4;i++){
        int n;
	scanf("%d",&n);

        if(head->val==NULL){
            head->val=n;
            temp=head;
        }
        else{
        
            struct ListNode* new=(struct ListNode*)malloc(5*sizeof(struct ListNode));
            new->val=n;
            new->next=NULL;
            temp->next=new;
            temp=new;
        
    }
    }
  
   printf("%d",isPalindrome(head));

   
}
