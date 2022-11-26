#include "bits/stdc++.h"
using namespace std;

/* Link list node */
struct Node
{
	int data;
	struct Node* next;

	~Node()
	{
		delete this;
	}
};

void push(struct Node** head_ref, int new_data)
{
	struct Node* new_node = new Node;

	new_node->data = new_data;

	new_node->next = (*head_ref);

	(*head_ref) = new_node;
}

bool detectLoop(Node* head)
{
	set<Node*> s;

	while(head != NULL)
	{

		if(s.find(head) != s.end()) return true;

		s.insert(head);

		head = head->next;
	}

	return false;
}

int main()
{
	/* Start with the empty list */
	struct Node* head = NULL;

	push(&head, 20);
	push(&head, 4);
	push(&head, 15);
	push(&head, 10);

	/* Create a loop for testing */
	head->next->next->next->next = head;

	if(detectLoop(head)) cout << "Loop Found";
	else cout << "No Loop";

	return 0;
}