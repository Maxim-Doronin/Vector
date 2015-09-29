#include "vector.h"

vector::vector(int size)
{
	this->size = size;
	mas = new float [size];
}

vector::vector(vector& v)
{
	size = v.get_size();
	mas = new float [size]l;
	for (int i=0; i<n; i++)
		mas[i]=v.get_mas()[i];
}

vector::~vector()
{
	delete []mas;
}

vector vector::operator+(const vector& f)
{
	vector tmp(size);
	for (int i=0; i<n; i++)
		tmp.get_mas()[i] = mas[i] + f.get_mas()[i];
	return tmp;
}

vector vector::operator-(const vector& f)
{
	vector tmp(size);
	for (int i=0; i<n; i++)
		tmp.get_mas()[i] = mas[i] - f.get_mas()[i];
	return tmp;
}

int vector::operator*(const vector &f)
{
	float result = 0.0;
	for (int i=0; i<n; i++)
		result += mas[i] + f.get_mas()[i];
	return result;
}

bool vector::operator==(const vector& f) const
{
	if (size != f.get_size()) return false;
	for (int i=0; i<size; i++)
		if (mas[i] != f.get_mas()[i]) return false;
	return true;
}

bool vector::operator!=(const vector& f) const
{
	if (size != f.get_size()) return true;
	for (int i=0; i<size; i++)
		if (mas[i] != f.get_mas()[i]) return true;
	return false;
}

vector& vector::operator=(const vector& f)
{
	if (this == &f) 
	{
		size = f.get_size();
		for (int i=0; i<size; i++)
			mas[i] = f.get_mas()[i];
	}
	return *this;
}