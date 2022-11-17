#include "bits/stdc++.h"
using namespace std;

struct Node
{
	int data;
	struct Node* next;

	Node(int x)
	{
		data = x;
		next = NULL;
	}
};
void printList(Node* node)
{
	while(node != NULL)
	{
		cout << node->data << " ";
		node = node->next;
	}
	cout << "\n";
}

struct Node
{
	int data;
	Node* next;

	Node(int x)
	{
		data = x;
		next = NULL;
	}
};
class Solution
{
public:

	/* Should return data of middle node. If linked list is empty, then  -1*/
	int getMiddle(Node* head)
	{
		// Your code here

		if(head == NULL) return -1;

		int count  = 0;
		Node* temp = head;

		while(temp != NULL)
		{
			temp = temp->next;
			count++;
		}

		int mid = count / 2;
		temp	= head;

		while(mid--)
		{
			temp = temp->next;
		}

		return temp->data;
	}
};

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int N;
		cin >> N;
		int data;
		cin >> data;
		struct Node* head = new Node(data);
		struct Node* tail = head;
		for(int i = 0; i < N - 1; ++i)
		{
			cin >> data;
			tail->next = new Node(data);
			tail	   = tail->next;
		}

		Solution ob;
		cout << ob.getMiddle(head) << endl;
	}
	return 0;
}
