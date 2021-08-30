struct ListNode* reverseBetween(struct ListNode* head, int left, int right){
 
  if(head == NULL) return NULL;
if(head->next == NULL || left==right) return head;

 int counter = 0;
struct ListNode* prevPtr;
struct ListNode* ptr = head;
struct ListNode* nextPtr = head;
struct ListNode* innerHead;
struct ListNode* innerTail;
 while(ptr!=NULL && counter != left){
     ++counter;
     if(counter == left)
         innerHead = ptr;
     else{
         prevPtr = ptr;
         ptr=ptr->next;
     }
 }
 ptr=ptr->next;
 while(ptr != NULL && counter != right){
     ++counter;
     if(counter == right){
         innerTail = ptr;
         nextPtr= innerTail->next;
     }
         
     else
          ptr=ptr->next;
 }
 counter = left;
 struct ListNode* itPrev = innerHead;
 ptr = itPrev->next;
 struct ListNode* itNext = ptr->next;
 while(counter != right){
     ptr->next = itPrev;
     itPrev=ptr;
     ptr=itNext;
     if(itNext == NULL)
         break;
     itNext = itNext->next;
     counter++;
 }
if(left == 1){
    innerHead->next = nextPtr;
    head = innerTail;
}
else{
    prevPtr->next = innerTail;
    innerHead->next = nextPtr;
}
 return head;
}
