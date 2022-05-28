#ifndef __SET_H
#define __SET_H
#pragma once
#include <iostream>
using namespace std;
class Set
{
	int *m_arry;
	int m_max;
	int m_cuurnetsize;
public:
	Set();
	Set(int max);
	Set(Set& other);
	~Set();
	Set operator=(int num);//כתיבה של אופרטור חתימה השוואה בין אובייקטים 
	Set operator+(int num);
	Set operator+(Set& other);//מקבל קבוצה אחרת , אובייקט אחר נשלח ככתובת וההחזר *this
	void operator+=(int num);
	bool operator>(Set& other);
	friend ostream& operator<<(ostream& os, const Set& obj);// אם אני רושמת set המטודה מחזירה לי אובייקט מסוג המחלקה.
	int operator[](int index);//חייב לרשום מה האופרטור מחזיר ואת הסימן שלו



};
#endif