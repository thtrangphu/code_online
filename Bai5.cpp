#include "Header.h"
Node* CreateNode(int n) {
	Node* temp = new Node;
	temp->data = n;
	temp->pNext = NULL;
	return temp;
}
bool InitStack(Stack& s, int n) {
	s.top = NULL;
	s.max = n;
	s.size = 0;
	return true;
}
bool IsFullStack(Stack& s) {
	if (s.size == s.max) return true;
	else return false;
}
bool IsEmptyStack(Stack& s) {
	if (s.size == 0) return true;
	else return false;
}
bool PushStack(Stack& s, int value) {
	if (IsFullStack(s)) return false;
	if (IsEmptyStack(s))  s.top = CreateNode(value);
	else { Node* temp = CreateNode(value); temp->pNext = s.top; s.top = temp; }
	s.size++;
	return true;
}
bool PopStack(Stack& s) {
	if (IsEmptyStack(s)) return false;
	Node* temp = s.top;
	s.top = s.top->pNext;
	delete temp;
	s.size--;
	return true;
}
int PeekStack(Stack& s) {
	if (IsEmptyStack(s))return -1111111;
	return s.top->data;
}
bool ClearStack(Stack& s) {
	while (s.top != NULL) {
		Node* temp = s.top;
		s.top = s.top->pNext;
		delete temp;
	}
	s.top = NULL;
	s.max = 0;
	s.size = 0;
	return true;
}

bool KiemTraViTri(Stack& BanCoVua, int Vitrihang, int Cot) {
	if (IsEmptyStack(BanCoVua)) return true;
	int outData = BanCoVua.top->data;
	if (abs(BanCoVua.size - Vitrihang) == abs(outData - Cot) || outData == Cot) return false;
	PopStack(BanCoVua);
	bool flag = KiemTraViTri(BanCoVua, Vitrihang, Cot);
	PushStack(BanCoVua, outData);
	return flag;
}
void XepHau(Stack& BanCoVua, int& outCase) {
	if (BanCoVua.size == 8){ outCase++; }
	for (int Cot = 1; Cot <= 8; Cot++) {
		if (KiemTraViTri(BanCoVua, BanCoVua.size + 1, Cot)) {
			PushStack(BanCoVua, Cot);
				XepHau(BanCoVua, outCase);
				PopStack(BanCoVua);
		}
	}
}	
