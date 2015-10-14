#pragma once

#include <iostream>
using namespace std;

typedef double vElem;

class vector {
private:
	int size;
	vElem *mas;
public:
	vector(int size);
	vector(vector& v);
	~vector();
		//перегрузка операций
	vector operator+(const vector& f);
	vector operator-(const vector& f);
	int operator*(const vector &f);
	int operator==(const vector& f) const;
	int operator!=(const vector& f) const;
	const vector& operator=(const vector& f);
		//ввод-вывод
	//friend istream& operator>>(istream& istr,       vector& f);
	//friend ostream& operator<<(ostream& ostr, const vector& f);
};
