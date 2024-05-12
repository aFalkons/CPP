#pragma once

template <typename T>
class Array
{
private:

	T *a;
	unsigned int len;

public:
	// Constructor
	Array();
	Array(unsigned int n);

	// Destructor
	~Array();

	// Copy Constructor
	Array(const Array& other);

	// Assignment Operator Overload
	Array<T>&		operator=(const Array& other);
	unsigned int	size() const;
	T&				operator[](unsigned int index);
};

template <typename T>
Array<T>::Array()
{
	this->a = NULL;
	this->len = 0;
}

template <typename T>
Array<T>::Array(unsigned int n)
{
	this->a = new T[n];
	this->len = n;
}


template <typename T>
Array<T>::~Array()
{
	delete[] a;
}

template <typename T>
Array<T>::Array(const Array& other)
{
	*this = other;
}

template <typename T>
Array<T> &Array<T>::operator=(const Array &other)
{
	if (this == &other)
		return *this;
	delete[] a;
	a = new T[other.size()];
	for (unsigned int i = 0; i < other.size(); ++i)
	{
		a[i] = other.a[i] ;
	}
	return *this;
}

template <typename T>
inline unsigned int Array<T>::size() const
{
    return this->len;
}

template <typename T>
T &Array<T>::operator[](unsigned int index)
{
 	if (index >= len)
	{
		throw std::out_of_range("Index out of range");
	}
	return a[index];
}
