// Linear_Table_By_Class.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	int Num[3] = { 23,32,43 };
	linear_Table<int> LinTa;
	//LinTa.InitList();
	for (int i = 0; i < 101; i++)
	{
		LinTa.ListInsert(i + 1, Num[i]);
	}
	std::cout << LinTa.GetElem(2) <<" "<< LinTa.ListLenght() <<std::endl;
	LinTa.ListInsert(2, 999);
	std::cout << LinTa.GetElem(2) <<" "<<LinTa.ListLenght()<< std::endl;
	std::cout << LinTa.LocateElem(999) << std::endl;
	LinTa.ClearList();
	system("pause");
    return 0;
}

