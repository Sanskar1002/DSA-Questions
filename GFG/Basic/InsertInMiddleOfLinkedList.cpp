/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

//Function to insert a node in the middle of the linked list.
Node* insertInMiddle(Node* head, int x)
{
	// Code here
	Node *newNode = new Node(x);
	Node *ptr = head;
	int count = 0;
	
	if(head == NULL)
	{
	    return head;
	}
	while(ptr!=NULL)
	{
	    ptr = ptr->next;
	    count++;
	}
	ptr = head;
	
	if(count %2 == 0)
	{
	    count = count/2-1;
	}
	else{
	    count = count/2;
	}
	for(int i = 1;i<=count;i++)
	{
	    ptr = ptr->next;
	}
	
	newNode->next = ptr->next;
	ptr->next = newNode;
	
	return head;
}
