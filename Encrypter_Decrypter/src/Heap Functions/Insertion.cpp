#include <Heap.h>
/*
	Insert New Elements To Heap
*/
void Heap::insert_to_heap(char ch, int value)
{
	Node *n = new Node(ch, value);
	v.push_back(n);
	adjust_parent(v.size() - 1);
}
void Heap::insert_to_heap(int value, Node *left, Node *right)
{
	Node *n = new Node(value, left, right);
	v.push_back(n);
	adjust_parent(v.size() - 1);
}
void Heap::adjust_parent(int index)
{
	if(index == 0)
		return;
	int parent = (index - 1) / 2;
	if(v[parent]->get_value() > v[index]->get_value())
	{
		swap(v[index], v[parent]);
		adjust_parent(parent);
	}
}
