#include <Heap.h>
/*
	Delete Elements From Heap
*/
Node *Heap::delete_from_heap()
{
	Node *n = v[0];
	swap(v[0], v[v.size() - 1]);
	v.pop_back();
	if(!v.empty())
		adjust_child(0);
	return n;
}
void Heap::adjust_child(int index)
{
	int minimum = v[index]->get_value(), min_child_index = -1;
	unsigned int left = index * 2 + 1, right = index * 2 + 2;
	if(left < v.size() && v[left]->get_value() < minimum)
		min_child_index = left, minimum = v[left]->get_value();
	if(right < v.size() && v[right]->get_value() < minimum)
		min_child_index = right, minimum = v[right]->get_value();
	if(min_child_index != -1)
	{
		swap(v[index], v[min_child_index]);
		adjust_child(min_child_index);
	}
}
