Node* floydDetectLoop(Node* head){          //condition for non-circular lists
  if(head==NULL)
    return NULL;
  Node* fast= head;
  Node* slow= head;
  
  while(slow!=NULL && fast!=NULL){
    fast=fast->next;
    if(fast!=NULL)
      fast=fast->next;
    slow=slow->next;
    if(slow==fast)                        //loop detected
      return slow;
  }
  return NULL;
}

Node *getStartingNode(Node *head) {
  if(head == NULL) 
    return NULL;
  Node* intersection = floydDetectLoop(head);             //Step-1
  if(intersection == NULL)
    return NULL;
  Node* slow = head;                                      //Step-2
  while(slow != intersection) {                           //Step-3
    slow = slow -> next;
    intersection = intersection -> next;
  }  
  return slow;                                            //Step-4
}
