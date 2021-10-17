bool list::isEmpty()		//To check that linked list is empty or not
{
	if (head == NULL)		//head is the start of list
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int list::insertAtEnd(int index, int value)		//value=data has to store in node's data
{
	node* newNode = new node();
	node* temp = head;
	int currIndex = 1;
	while (currIndex < index - 1 && temp != NULL)
	{
		currIndex++;
		temp = temp->next;
	}
	if (temp != NULL)
	{
		newNode->data = value;
		temp->next = newNode;		//next pointer stores the address of next node
		return 1;
	}
	else
	{
		return 0;
	}
}