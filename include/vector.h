#pragma once

typedef float vElem;

class vector {
private:
	int size;
	vElem *mas;
public:
	vector(int size);
	vector(vector& v);
	~vector();
	vector operator+(const vector& f);
	vector operator-(const vector& f);
	int operator*(const vector &f);
	bool operator==(const vector& f) const;
	bool operator!=(const vector& f) const;
	const vector& operator=(const vector& f);
};
