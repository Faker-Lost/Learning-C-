#pragma once
#include<iostream>
using namespace std;

namespace
{
	template<class _ty> class list;

	template<class _ty> class listiterator;

	// 节点类。
	template<class _ty>
	class listnode
	{
		friend class list<_ty>;
		friend class listiterator<_ty>;
	public:
		listnode() :_value(_ty()), _next(nullptr), _prev(nullptr) {}
		listnode(_ty v, listnode* next = nullptr, listnode* prev = nullptr) :_value(v), _next(next), _prev(prev) {}
	private:
		_ty           _value;
		listnode* _next;
		listnode* _prev;
	};

	// 迭代器。
	template<class _ty>
	class listiterator
	{
		typedef listiterator<_ty> _it;
	public:
		listiterator() :_ptr(nullptr) {}
		listiterator(listnode<_ty>* _p) :_ptr(_p) {}
	public:
		_it& operator++()
		{
			_ptr = _ptr->_next;
			return *this;
		}
		_it& operator--()
		{
			_ptr = _ptr->prev;
			return *this;
		}
		_ty& operator*()
		{
			return (_ptr->_value);
		}
		bool operator!=(const _it& it)
		{
			return _ptr != it._ptr;
		}
		bool operator==(const _it& it)
		{
			return _ptr == it._ptr;
		}
		listnode<_ty>* _mynode()
		{
			return _ptr;
		}
	private:
		listnode<_ty>* _ptr;
	};

	// 链表类。
	template<class _ty>
	class list
	{
	public:
		typedef listnode<_ty>* _nodeptr;
		typedef listiterator<_ty> iterator;
	public:
		list() :_size(0)
		{
			createhead();
		}
		list(size_t n, const _ty& x = _ty()) :_size(0)
		{
			createhead(),
				insert(begin(), n, x);
		}
		list(const _ty* first, const _ty* last) :_size(0)
		{
			createhead();
			while (first != last)
				push_back(*first++);
		}
		list(iterator first, iterator last)
		{
			createhead();
			while (first != last)
			{
				push_back(*first);
				++first;
			}
		}
		list(list<_ty>& lt) :_size(0)
		{
			createhead();
			list<_ty>tmp(lt.begin(), lt.end());
			this->swap(tmp);
		}
		~list()
		{
			clear();
			delete _head;
			_size = 0;
		}
	public:
		void push_back(const _ty& x)
		{
			insert(end(), x);
		}
		void pop_back()
		{
			erase(--end());
		}
		void push_front(const _ty& x)
		{
			insert(begin(), x);
		}
		void pop_front()
		{
			erase(begin());
		}
		_ty& front()
		{
			return *begin();
		}
		const _ty& front()const
		{
			return *begin();
		}
		_ty& back()
		{
			return *--end();
		}
		const _ty& back()const
		{
			return *--end();
		}
	public:
		size_t size()const
		{
			return _size;
		}
		bool empty()const
		{
			return (size() == 0);
		}
	public:
		iterator begin()
		{
			return iterator(_head->_next);
		}
		iterator end()
		{
			return iterator(_head);
		}
		void clear()
		{
			erase(begin(), end());
		}
	public:
		//在_p位置前插入值为x的节点
		iterator insert(iterator _p, const _ty& x)
		{
			_nodeptr cur = _p._mynode();
			_nodeptr _s = new listnode<_ty>(x);

			_s->_next = cur;
			_s->_prev = cur->_prev;
			_s->_prev->_next = _s;
			_s->_next->_prev = _s;

			_size++;
			return iterator(_s);
		}
		void insert(iterator _p, size_t n, const _ty& x = _ty())
		{
			while (n--)
				insert(_p, x);
		}
		//删除_p位置的节点，返回该节点的下一个节点位置
		iterator erase(iterator _p)
		{
			_nodeptr cur = _p._mynode();
			_nodeptr next_node = cur->_next;

			cur->_prev->_next = cur->_next;
			cur->_next->_prev = cur->_prev;
			delete cur;

			_size--;

			return iterator(next_node);
		}
		iterator erase(iterator first, iterator last)
		{
			while (first != last)
			{
				first = erase(first);
			}
			return first;
		}
		void swap(list<_ty>& lt)
		{
			std::swap(_head, lt._head);
			std::swap(_size, lt._size);
		}
	protected:
		void createhead()
		{
			_head = new listnode<_ty>;
			_head->_prev = _head->_next = _head;
		}
	private:
		_nodeptr       _head;
		size_t         _size;

	};
};