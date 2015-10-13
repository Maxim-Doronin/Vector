#include "vector.h"

vector::vector(int size)
{
	this->size = size;
	mas = new vElem [size];
}

vector::vector(vector& v)
{
	size = v.size;
	mas = new vElem [size];
	for (int i=0; i<size; i++)
		mas[i]=v.mas[i];
}

vector::~vector()
{
	delete []mas;
}

vector vector::operator+(const vector& f)
{
	vector tmp(size);
	for (int i=0; i<size; i++)
		tmp.mas[i] = mas[i] + f.mas[i];
	return tmp;
}

vector vector::operator-(const vector& f)
{
	vector tmp(size);
	for (int i=0; i<size; i++)
		tmp.mas[i] = mas[i] - f.mas[i];
	return tmp;
}

int vector::operator*(const vector &f)
{
	float result = 0.0;
	for (int i=0; i<size; i++)
		result += mas[i] * f.mas[i];
	return result;
}

int vector::operator==(const vector& f) const
{
	int result = 1;
	if (size != f.size) {result = 0; return result;}
	for (int i=0; i<size; i++)
		if (mas[i] != f.mas[i]) {result = 0; break;}
	return result;
}

int vector::operator!=(const vector& f) const
{
	int result = 0;
	if (size != f.size) {result = 1; return result;}
	for (int i=0; i<size; i++)
		if (mas[i] != f.mas[i]) {result = 1; break;}
	return result;
}

const vector& vector::operator=(const vector& f)
{
	if (this == &f) 
	{
		size = f.size;
		delete []mas;
		mas = new vElem [size];
		for (int i=0; i<size; i++)
			mas[i] = f.mas[i];
	}
	return *this;
}