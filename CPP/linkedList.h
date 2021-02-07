#include <iostream>
#include <cassert>

template<typename T>
class Node
{
	template<typename T>
	friend class LinkedList;

	template<typename T>
	friend class ListIterator;

	template<typename T>
	friend class ListReverseIterator;

private:
	T data;
	Node<T> *next;
	Node<T> *prev;

public:
	Node()
	{
		next = nullptr;
		prev = nullptr;
	}
	~Node()
	{

	}
};

template<typename T>
class ListIterator
{
	template<typename T>
	friend class LinkedList;

private:
	Node<T> node;

public:

	ListIterator()
	{
		node = nullptr;
	}
	~ListIterator()
	{

	}

public:
	bool operator == (const ListIterator<T>& iter)
	{
		return node == iter.node;
	}

	bool operator != (const ListIterator<T>& iter)
	{
		return node != iter.node;
	}

	void operator ++ ()
	{
		node = node.next;
	}

	void operator -- ()
	{
		node = node.prev;
	}

	T& operator * ()
	{
		return node.data;
	}
};

template<typename T>
class ListReverseIterator
{
	template<typename T>
	friend class LinkedList;

private:
	Node<T> node;

public:

	ListReverseIterator()
	{
		node = nullptr;
	}
	~ListReverseIterator()
	{

	}

public:
	bool operator == (const ListReverseIterator<T>& iter)
	{
		return node == iter.node;
	}

	bool operator != (const ListReverseIterator<T>& iter)
	{
		return node != iter.node;
	}

	void operator ++ ()
	{
		node = node.prev;
	}

	void operator -- ()
	{
		node = node.next;
	}

	T& operator * ()
	{
		return node.data;
	}
};

template<typename T>
class LinkedList
{
private:
	Node<T> *pHead;
	Node<T> *pTail;
	int dataSize;

public:
	typedef ListIterator<T> iterator;

public:
	LinkedList()
	{
		pHead = new Node<T>();
		pTail = new Node<T>();

		pHead->next = pTail;
		pTail->prev = pHead;

		dataSize = 0;
	}
	~LinkedList()
	{
		clear();
	}

public:

	void push_front(const T data) {
		// 새 노드 생성 후 값 삽입
		Node<T> *newNode = new Node<T>();
		newNode->data = data;

		// 새 노드를 head.next와 head 사이에 연결
		pHead->next->prev = newNode;
		newNode->next = pHead;
		pHead->next = newNode;
		newNode->prev = pHead;

		dataSize++;
	}

	void pop_front() {
		if (empty())
		{
			assert(false);
		}

		Node<T> *deleteNode = pHead->next;

		pHead->next = deleteNode->next;
		deleteNode->next->prev = pHead;

		delete deleteNode;

		dataSize--;
	}

	T front() const {
		if (empty())
		{
			assert(false);
		}
		return pHead->next->data;
	}

	void push_back(const T data) {
		Node<T> *newNode = new Node<T>();
		newNode->data = data;

		//  새 노드를 tail.prev와 tail 사이에 연결
		pTail->prev->next = newNode;
		newNode->prev = pTail->prev;
		pTail->prev = newNode;
		newNode->next = pTail;

		dataSize++;
	}

	void pop_back() {
		if (empty())
		{
			assert(false);
		}
		Node<T> *deleteNode = pTail->prev;

		pTail->prev = deleteNode->prev;
		deleteNode->prev->next = pTail;

		delete deleteNode;

		dataSize--;
	}

	T back() const {
		if (empty())
		{
			assert(false);
		}
		return pTail->prev->data;
	}

	int size() const {
		return dataSize;
	}

	bool empty() const {
		return dataSize == 0;
	}

	void clear() {
		Node<T> *node = pHead->next;

		while (node != pTail)
		{
			Node<T> *deleteNode = node;
			node = node->next;
			delete deleteNode;
		}
		dataSize = 0;
	}

	ListIterator<T> begin() const {
		ListIterator<T> iter;
		iter.node = pHead->next;
		return iter;
	}

	ListIterator<T> end() const {
		ListIterator<T> iter;
		iter.node = pTail;
		return iter;
	}

};
