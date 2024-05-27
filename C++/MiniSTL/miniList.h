#pragma once
#include<iostream>
#include<string>
#include<algorithm>
#include<cassert>
using namespace std;
//List�ڵ���
template<class T>
struct ListNode
	{
		T data;
		ListNode<T> * next;
		ListNode<T> * prev;
		ListNode(const T&value, ListNode<T>*nextNode = nullptr, ListNode<T>*prevNode = nullptr):
			data(value),next(nextNode),prev(prevNode){}
};


//������ δ�޸���
template <class T, class Ref, class Ptr>
class ListIterator
{
	typedef ListNode<T> Node;
	typedef ListIterator<T, Ref, Ptr> Self;
	Node* _node;
public:
	//���캯��
	ListIterator(Node*node = nullptr):_node(node){}
	//++it
	Self& operator++()
	{
		_node = _node->next;
		return *this;
	}
	//it++
	Self operator++(int)
	{
		Self tmp(*this);
		_node = _node->next;
		return tmp;
	}
	//--it
	Self& operator--()
	{
		_node = _node->prev;
		return *this;
	}
	//it--
	Self operator--(int)
	{
		Self tmp(*this);
		_node = _node->prev;
		return tmp;
	}
	//!= ==
	bool operator!=(const Self& s)
	{
		return _node != s._node;
	}
	bool operator==(const Self& s)
	{
		return _node == s._node;
	}
	//*������
	T& operator*()
	{
		return _node->data;
	}
	const T& operator*() const
	{
		return _node->data;
	}

	//->
	T* operator->()
	{
		return &(_node->data);
	}
	const T* operator->() const 
	{
		return &(_node->data);
	}
};



//list��
template<class T>
class List {	
	typedef ListNode<T> Node;//������ΪNode
public:
	typedef ListIterator<T> iterator;
	//typedef ListIterator<T> const_iterator;
	//���캯�� ˫��ѭ������
	List() {
		CreateHead();//���ú�������ͷ�ڵ�
	}
	List(int n, const T& value = T());
	template<class T>
	List(iterator first, iterator last);
	//��������
	~List();


	//list Iterator
	iterator begin()
	{
		return iterator(_head->next);
	}
	iterator end()
	{
		return _head;
	}
	const iterator begin()
	{
		return _head->next;
	}
	const iterator end()
	{
		return _head;
	}

	//list capacity
	size_t size() const
	{
		size_t = 0;
		iterator it = begin();
		while (it != end())
		{
			size++;
			++it;
		}
		return size;
	}
	bool empty()const
	{
		return size == 0;
	}

	//list access
	T& front();
	const T& front();
	T& back();
	const T& back();

	//list modify
	void push_back(const T& val) { 
		insert(end(), val);
	}
	void pop_back() { 
		erase(--end()); 
	}
	void push_front(const T& val) { insert(begin(), val); }
	void pop_front() { erase(begin()); }
	// ��posλ��ǰ����ֵΪval�Ľڵ�
	iterator insert(iterator pos, const T& val)
	{
		Node* cur = pos._node;
		Node* prev = pos._node->prev;
		Node* newNode = new Node(val);

		newNode->next = cur;
		cur->prev = newNode;
		newNode->prev = prev;
		prev->next = cur;

		return newNode;
	}
	// ɾ��posλ�õĽڵ㣬���ظýڵ����һ��λ��
	iterator erase(iterator pos)
	{
		if (pos != _head)
		{
			Node* cur = pos._node;

			Node* _prev = cur->prev;
			Node* _next = cur->next;

			prev->next = _next;
			next->prev = _prev
			delete cur;
			return _next;
		}
		return;
		
	}
	void clear();
	void swap(list<T>& l);
	
	//��ʼ��ͷ�ڵ�
	void CreateHead()
	{
		_head = new Node;
		_head->next = _head;
		_head->prev = _head;
	}

private:
		Node* _head;
};
