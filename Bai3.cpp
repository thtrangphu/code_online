#pragma once
#ifndef Header_h
#define Header_h
#include <iostream>
using namespace std;

struct Node {
	int data;
	struct Node* pNext;
};
struct Stack {
	Node* top;
	int size;
	int max;
};
void InitStack(Stack& s, int n);
bool IsEmpty(Stack s);
bool IsFull(Stack s);
Node* CreateNode(int x);
bool PushStack(Stack& s, int value);
bool PopStack(Stack& s);
int Peek(Stack s);
void BieuDienNhiPhan(Stack& s, int n);
void PrintStack(Stack s);
#endif // !Header_h
