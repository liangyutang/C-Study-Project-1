#pragma once
#include<iostream>
using namespace std;

template<class T>
class myArr
{
public:
	myArr(int capacity);
	~myArr();
	myArr(const myArr& myArr);
	myArr& operator=(const myArr& myArr) {
		if (this->arr!=NULL)
		{
			delete[] this->arr;
			this->capacity = 0;
			this->size = 0;
		}

		this->capacity = myArr.capacity;
		this->size = myArr.size;
		this->arr = new T[this->capacity];
		for (int i = 0; i < size; i++)
		{
			this->arr[i] = myArr.arr[i];
		}

		return *this;
	}

	T& operator[](int index) {
		return this->arr[index];
	}

	void push_back(const T& val) {
		if (this->size==this->capacity)
		{
			return;
		}

		this->arr[this->size] = val;
		this->size++;
	}


	void pop_back() {
		if (this->size==0)
		{
			return;
		}
		this->size--;
	}

	int getCapacity() {
		return this->capacity;
	}


	int getSize() {
		return this->size;
	}

private:

	T* arr;
	int capacity;
	int size;

};

template<class T>
myArr<T>::myArr(int capacity)
{
	this->capacity = capacity;
	this->size = 0;
	arr = new T[this->capacity];
}

template<class T>
myArr<T>::myArr(const myArr& myArr) {
	//¿½±´¹¹Ôìº¯Êý
	this->capacity = myArr.capacity;
	this->size = myArr.size;
	this->arr = new T[this->capacity];
	for (int i = 0; i < myArr.size; i++)
	{
		this->arr[i] = myArr.arr[i];
	}
}

template<class T>
myArr<T>::~myArr()
{
	if (this->arr!=NULL)
	{
		delete[] this->arr;
		this->arr = NULL;
		this->capacity = 0;
		this->size = 0;
	}
}