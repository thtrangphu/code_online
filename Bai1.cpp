#include <iostream>
using namespace std;

struct Node {
	int data;
	struct Node* pNext;
};

struct List {
	Node* pHead = NULL;//Skip initialization list
	Node* pTail = NULL;
};

Node* initializationNode(int x) {
	Node* p = new Node;
	if (p == NULL) cout << "Not enough memory to allocate. ";
	p->data = x;
	p->pNext = NULL;
	return p;
}
void addToHead(List& l, Node* p) {
	if (l.pHead == NULL) {
		l.pHead = l.pTail = p;
	}
	else {
		p->pNext = l.pHead;
		l.pHead = p;
	}
}

void addToEnd(List& l, Node *p) {
	if (l.pHead == NULL) {
		l.pHead = l.pTail = p;
	}
	else {
		l.pTail->pNext = p;
		l.pTail = p;
	}
}

void addNode_pAfterNode_q(List& l, Node* p, Node* q) {
	bool check = false;
	if (l.pHead == NULL) {
		cout << "Empty list cannot be deleted. ";
		return;
	}
	else {
		for (Node* k = l.pHead; k; k = k->pNext) {
			if (k->data == q->data) {
				Node* tempp = initializationNode(p->data);
				check = true;
				Node* temp = k->pNext;
				tempp->pNext = temp;
				k->pNext = tempp;
			}
		}
		if (check == false) cout << "No Node q in the list." << endl;
	}
}
void addNode_pBeforeNode_q(List& l, Node* p, Node* q) {
	bool check = false;
	if (l.pHead == NULL) {
		cout << "Empty list cannot be deleted. ";
		return;
	}
	else {
		Node* temp = new Node;
		Node* k = l.pHead;
		if (q->data == l.pHead->data) {
			addToHead(l, p);
		}
		for (; k; k = k->pNext) {
			if (k->data == q->data) {
				Node* tempp = initializationNode(p->data);
				check = true;
				tempp->pNext = k;
				temp->pNext = tempp;
			}
			temp = k;//Keep the link in front 
		}
		if (check == false) cout << "No Node q in the list." << endl;
	}
}
void addNodeAnyPosition(List& l, Node* p, int vt, int n) {
	if (l.pHead == NULL || vt == 1) {
		addToHead(l, p);
		return;
	}
	else {
		if (vt == n + 1) addToEnd(l, p);
		else {
			int count = 1;//2->n
			Node* temp = new Node;
			for (Node* k = l.pHead; k; k = k->pNext) {
				count++;
				if (count == vt) {
					Node* tempp = initializationNode(p->data);
					Node* temp = k->pNext;
					tempp->pNext = temp;
					k->pNext = tempp;
					break;
				}
			}
		}
	}
}
void deleteHead(List& l) {
	if (l.pHead == NULL) return;
	Node* p = l.pHead;
	l.pHead = l.pHead->pNext;
	delete p;
}
void deleteTail(List& l) {
	if (l.pHead == NULL) return;
	if (l.pHead->pNext == NULL) {
		deleteHead(l);
		return;
	}
	for (Node* k = l.pHead; k; k = k->pNext) {
		if (k->pNext == l.pTail) {
			delete l.pTail;
			k->pNext = NULL;
			l.pTail = k;
			return;
		}
	}
	
}
void deleteNodeAfterNode_q(List& l, Node* q) {
	bool check = false;
	if (l.pHead == NULL) {
		cout << "Empty list cannot be deleted. ";
		return;
	}
	else {
		for (Node* k = l.pHead; k; k = k->pNext) {
			if (k->data == q->data) {
				if (k->pNext == NULL) {
					return;
				}
				Node* temp = k->pNext;
				Node* tempp = temp->pNext;
				k->pNext = tempp;
				delete(temp);
				check = true;
			}
		}
		if (check == false) cout << "No Node q in the list." << endl;
	}
}
void printList(List l) {
	for (Node* k = l.pHead; k;k=k->pNext) {
		cout << k->data << " ";
	}
	cout << endl;
}
int main() {
	List l;
	Node* p = NULL;
	int countList = 0;
	while (1) {
		system("cls");
		cout << "0.Exit\n1.Enter the element in the list \n2.Output List\n3.Add Head";
		cout << "\n4.Delete Head\n5. Delete Tail\n6.Add Node p after Node q \n";
		cout << "7.Add Node p before Node q \n";
		cout << "8.Add an element to any position in the linked list \n";
		cout << "9.Delete  Node after Node q in the linked list \n";
		cout << "10.Delete an element to any position in the linked list \n";
		int select;
		cout << " Please enter options: ";
		do {
			cin >> select;
			if (select < 0 || select > 10) cout << "Enter incorrectly, please re-enter...\n";
		} while (select < 0 || select > 10);
		if (select == 0) exit(0);
		else if (select == 1) {
			cout << "Input number: ";
			int n;
			cin >> n;
			int count = 0;
			do {
				cout << "Input Node " << countList + 1 << ": ";
				int x;
				cin >> x;
				Node* p = new Node;
				p = initializationNode(x);
				addToEnd(l, p);
				count++;
				countList++;
			} while (count != n);
		}

		else if (select == 2) {
			if (countList == 0) cout << "No element in the list " << endl;
			else {
				cout << "OUTPUT LIST: ";
				printList(l);
			}
		}
		else if (select == 3) {
			cout << "Input number: ";
			int n;
			cin >> n;
			int count = 0;
			do {
				cout << "Input Node " << countList + 1 << ": ";
				int x;
				cin >> x;
				Node* p = new Node;
				p = initializationNode(x);
				addToHead(l, p);
				count++;
				countList++;
			} while (count != n);
		}
		else if (select == 4) {
			deleteHead(l);
			countList--;
		}
		else if (select == 5) {
			deleteTail(l);
			countList--;
		}
		else if (select == 6) {
			cout << "Input Node p: ";
			int x;
			cin >> x;
			Node* p = new Node;
			p = initializationNode(x);
			cout << "Input Node q: ";
			cin >> x;
			Node* q = new Node;
			q = initializationNode(x);
			addNode_pAfterNode_q(l, p, q);
			countList++;
		}
		else if (select == 7) {
			cout << "Input Node p: ";
			int x;
			cin >> x;
			Node* p = new Node;
			p = initializationNode(x);
			cout << "Input Node q: ";
			cin >> x;
			Node* q = new Node;
			q = initializationNode(x);
			addNode_pBeforeNode_q(l, p, q);
			countList++;
		}
		else if (select == 8) {
			cout << "Input the position to add: ";
			int vt;
			int n = 0;
			for (Node* k = l.pHead; k; k = k->pNext) {
				n++;
			}
			int x;
			do {
				cin >> vt;
				if (vt > n + 1 || vt < 1)  cout << "Enter incorrectly, please re-enter...\n";
			} while (vt > n + 1 || vt < 1);
			cout << "Input Node to add: ";
			cin >> x;
			Node* p = initializationNode(x);

			addNodeAnyPosition(l, p, vt, n);
		}
		else if (select == 9) {
			int x;
			cout << "Input Node q: ";
			cin >> x;
			Node* q = new Node;
			q = initializationNode(x);
			deleteNodeAfterNode_q(l, q);
		}
		else {

		}
		system("pause");
	}
}
