#include "set.h"
#include <iostream>
Set ::Set()
{
	m_max = 1000;
	m_arry = nullptr;
	m_cuurnetsize = 0;
}
Set::Set(int max)
{
	m_max = max;
	m_arry = new int [m_max];
}
Set::Set(Set& other)
{
	/**this = other;*/
	for (int i = 0; i < m_max; i++)
	{
		this[i] = other.m_arry[i];
		m_cuurnetsize++;
	}
}
Set::~Set()
{
	delete[] m_arry;

}
Set Set:: operator=(int num)
{
	for (int i = 0; i < m_max; i++)
	{
		if (m_arry[i] == num)
		{
			return 1;
		}
	}
	return -1;
}
Set Set:: operator+(int num)
{
	int* temp;
	temp = new int[m_cuurnetsize + 1];
	for (int i = 0; i < m_cuurnetsize; i++)
	{
		temp[i] = m_arry[i];
	}
	temp[m_cuurnetsize] = num;
	
	return *temp;
}
Set Set:: operator+(Set&other)
{
	int* temp;
	int size = m_cuurnetsize + other.m_cuurnetsize;
	temp = new int[(size)];
	for (int i = 0; i < size; i++)
	{
		if (i >= m_cuurnetsize)
		{
			temp[i] = other.m_arry[i];
		}
		temp[i] = m_arry[i];
	}
	return *temp;
}
void Set:: operator+=(int num)
{
	int* temp;
	temp = new int[m_cuurnetsize + 1];
	for (int i = 0; i < m_cuurnetsize; i++)
	{
		temp[i] = m_arry[i];
	}
	temp[m_cuurnetsize] = num;
	m_arry = temp;

}
ostream& operator<<(ostream& os, const Set& obj)// מטודה "חברה" בגלל שאנחנו ניגשים לספרייה אחרת של הדפסה
{
	for (int i = 0; i < obj.m_cuurnetsize; i++)
	{
		os << obj.m_arry[i] << " " << endl;
	}

}
bool Set:: operator>(Set& other)
{
	
	if (m_cuurnetsize > other.m_cuurnetsize)
	{
		return true;
	}
	return false;
}
int Set::operator[](int index)
{
	/*for (int i = 0; i < m_cuurnetsize; i++)
	{
		if (i == index)
		{
			return m_arry[i];
		}
	}*/
	return m_arry[index];
}

