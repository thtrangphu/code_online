
#include "Header.h"
void InitStack(Stack& s, int n) {
	s.top = NULL;
	s.max = n;
	s.size = 
}

bool IsEmpty(Stack s) {
	return (s.top == 0) ? 1 : 0;
}

bool IsFull(Stack s) {
	return (s.size == s.max) ? 1 : 0;
}
Node* CreateNode(int x) {
	Node* p = new Node;
	if (p == NULL) return NULL;
	p->data = x;
	p->pNext = NULL;
	return p;
}

bool PushStack(Stack& s, int value) {
	//Thêm đầu
	if (IsFull(s)==1) return 0;
	else {
		Node* p = CreateNode(value);
		if (IsEmpty(s) == 1) {
			s.top = p;
		}
		else {
			p->pNext = s.top;
			s.top = p;
		}
	}
	s.size++;
	return 1;
}
bool PopStack(Stack& s) {
	if (s.size == 0) return 0;
	//Xóa đầu
	Node* pDel = s.top;
	if (s.top->pNext == NULL) s.top == NULL;
	else {
		s.top = s.top->pNext;
		s.size--;
	}
	delete pDel;
	return 1;
}
int Peek(Stack s) {
	if (IsEmpty(s) == 1) return INT_MIN;
	return s.top->data;
}
void BieuDienNhiPhan(Stack& s, int n) {
	if (n == 0 || n == 1) {
		PushStack(s, n);
		return;
	}
	else if (n < 0) {
		int i = 0;
		while (n <= 0) {
			if ((n + pow(2, i)) > 0) {
				n += pow(2, i);
			}
			else i++;
		}
		int i2 = 0;
		do {
			PushStack(s, n % 2);
			n /= 2;
			i2++;
		} while (n != 0);
		while (i != i2) {
			PushStack(s, 0);
			i--;
		}
		PushStack(s, 2);
		PushStack(s, 1);
	}
	else {
		while (n != 0) {
			PushStack(s, n % 2);
			n /= 2;
		}
	}
}
void PrintStack(Stack s) {
	cout << "Ket qua la: ";
	if (s.top == NULL) cout << "Danh sach rong.";
	for (Node* k = s.top; k; k = k->pNext) {
		if (k->data == 2) cout << " ";
		else  cout << k->data;
	}
	cout << endl;
}
