// Linear_Table_By_Class.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

const int ListSize = 100;
template<class T>
class linear_Table {
public:
	void InitList();
	bool ListEmpty();
	void ClearList();
	T GetElem(int location);
	int LocateElem(T element);
	bool ListInsert(int location, T element);
	bool ListDelete(int location, T &element);
	int ListLenght();
private:
	T * data;
	int length;
};

template<typename T>
void linear_Table<T>::InitList() {
	data = new T[ListSize];
	length = 0;
}

template<class T>
bool linear_Table<T>::ListEmpty()
{
	if (length==0)
	{
		return true;
	}
	return false;
}

template<class T>
void linear_Table<T>::ClearList()
{
	delete(data);
	data = NULL;
	length = 0;
}

template<class T>
T linear_Table<T>::GetElem(int location)
{
	
	return T();
}


int main()
{
    return 0;
}

