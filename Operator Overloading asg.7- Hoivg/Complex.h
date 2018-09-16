#pragma once

class Complex
{
private:
	double real;
	double imaginary;
public:
	Complex(double = 0.0, double = 0.0);
	Complex operator+(const Complex &) const;
	Complex operator-(const Complex &) const;
	Complex operator==(const Complex &) const;
	Complex operator!=(const Complex &) const;
	Complex operator*(const Complex &)const;
	Complex operator/(const Complex &)const;
	Complex operator<<(const Complex &)const;
	Complex operator>>(const Complex &)const;

	void print() const;
};