#pragma once

class vector {
private:
	int size;
	float *mas;
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
	int get_size() {return size;};
	float* ger_mas() {return mas;};
}
