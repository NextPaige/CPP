//#include <iostream>
//
//using std::size_t;
//
//template<class T>
//class Vec
//{
//private:
//	// Vec�� ù ��° ��Ҹ� ����Ű�� ������
//	iterator data;
//	// Vec�� ������ ��� ������ ����Ű�� ������
//	iterator limit;
//public:
//	Vec() { create(); }
//	explicit Vec(size_t n, const T& val = T()) { create(n, val); }
//
//	typedef T* iterator;
//	typedef const T* const_iterator;
//	typedef size_t size_type;
//	typedef T value_type;
//	typedef std::ptrdiff_t difference_type;
//	typedef T& reference;
//	typedef const T& const_reference;
//
//	size_type size() const { return limit - data; }
//	T& operator[](size_type i) { return data[i]; }
//	const T& operator[](size_type i) const { return data[i]; }
//};
//
