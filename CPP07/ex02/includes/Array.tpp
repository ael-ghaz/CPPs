#ifndef ARRAY_TPP
#define ARRAY_TPP

template <typename T>
Array<T>::Array() : _datas(NULL), _size(0) {}

template <typename T>
Array<T>::Array(unsigned int n) : _datas(new T[n]), _size(n) {}

template <typename T>
Array<T>::Array(Array const &other)
	: _datas(new T[other._size]), _size(other._size)
{
	for (unsigned int i = 0; i < _size; ++i)
		_datas[i] = other._datas[i];
}

template <typename T>
Array<T> &Array<T>::operator=(Array const &other)
{
	if (this != &other)
	{
		delete [] _datas;
		_size = other._size;
		_datas = new T[_size];
		for (unsigned int i = 0; i < _size; ++i)
			_datas[i] = other._datas[i];
	}
	return *this;
}

template <typename T>
Array<T>::~Array()
{
	delete [] _datas;
}

template <typename T>
T Array<T>::operator[](unsigned int n) const
{
	if (n >= _size)
		throw OutOfBounds();
	return _datas[n];
}

template <typename T>
T &Array<T>::operator[](unsigned int n)
{
	if (n >= _size)
		throw OutOfBounds();
	return _datas[n];
}

template <typename T>
unsigned int Array<T>::size() const
{
	return _size;
}


template <typename T>
const char *Array<T>::OutOfBounds::what() const throw()
{
	return ("Index out of bounds");
}

#endif