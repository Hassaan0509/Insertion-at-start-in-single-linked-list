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

int list::insertAtStart(int value)		//value is data that has to store in node's data
{
	node* newNode = new node();
	newNode->data = value;
	if (isEmpty() == 1)
	{
		head = newNode;
		return 1;
	}
	else
	{
		newNode->next = head;		//next stores the address of next node of the list
		head = newNode;
		return 1;
	}
	return 0;
}