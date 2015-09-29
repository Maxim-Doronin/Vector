#pragma once

class vector {
private:
	int size;
	float *vmas;
public:
	vector(int size);
	vector(vector& v);
	~vector();
	vector operator+(const vector& f);
	vector operator-(const vector& f);
	int operator*(const vector &f);
	int operator==(const vector& f) const;
	int operator!=(const vector& f) const;
	const vector& operator=(const vector& f);
}

//test