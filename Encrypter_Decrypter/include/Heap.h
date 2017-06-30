#ifndef HEAP_H
#define HEAP_H

#include <vector>

#include <Node.h>

class Heap
{
	vector<Node *> v;
	void adjust_parent(int);
	void adjust_child(int);
public:
	void insert_to_heap(char, int);
	void insert_to_heap(int, Node *, Node *);
	Node *delete_from_heap();
	inline int get_size()
	{
		return v.size();
	}
	inline Node *get_front()
	{
		if(!v.empty())
			return v[0];
		return
			NULL;
	}
};

#endif // HEAP_H
