Node *insertNode(Node *head ,int i , int data){
  
  Node *newnode = new Node(data);
  
  if(head==NULL){
    
    return head;
    
  }
  
  if(i==0){
    
    newnode->next = head;
    
    head = newnode;
    
    return head;
    
  }
  
  Node *smallans = insertNode(head->next , i-1 , data);
  
  head->next = smallans;
  
  return head;
  
}
    
