#include<stdio.h>
#include<stdlib.h>
struct ListNode{
	int val;
	struct ListNode* next;
};
struct ListNode* redundancyRemoval(struct ListNode* head){
	struct ListNode* deleteDuplicates(struct ListNode* head){
    if(head==NULL)
        return head;
struct ListNode* temp=(struct ListNode*)malloc(5*sizeof(struct ListNode));
	struct ListNode* temp1=(struct ListNode*)malloc(5*sizeof(struct ListNode));
        struct ListNode* temp2=(struct ListNode*)malloc(5*sizeof(struct ListNode));

        temp=head;
	temp1=head->next;
	temp2=head;
       	while(temp1!=NULL){  
       		if(temp1->val==temp->val){
			temp->val=-101;
			if(temp1->next==NULL){
				temp1->val=-101;
			}

			else if(temp1->next->val!=temp1->val){
				temp1->val=-101;
				temp=temp->next->next;
				temp1=temp1->next->next;
				continue;

			}

			
	        }
		temp=temp->next;
		temp1=temp1->next;
        }

	while(temp2!=NULL){
	
		if(temp2->val!=-101){
			head=temp2;
			break;
		}
		temp2=temp2->next;

	}
    if(temp2==NULL)
        return temp2;

	while(temp2!=NULL){
	        if(temp2->next==NULL){
			break;
		}
		else if(temp2->next->val==-101){

                   
		  temp2->next=temp2->next->next;
		 
		  continue;
		  
	   }
		  
	   
	   temp2=temp2->next;
		
	}


	return head;

}
}


int main()
{
    struct ListNode* head=(struct ListNode*)malloc(5*sizeof(struct ListNode));
    struct ListNode* temp=(struct ListNode*)malloc(5*sizeof(struct ListNode));
    for(int i=0;i<6;i++){
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

    head=redundancyRemoval(head);
    if(head==NULL)
         printf("All duplicates");   
    while(head!=NULL){
	    printf("%d ",head->val);
	    head=head->next;
	    
    }
 


}
                
