#include <iostream>
#include "Complex.h"

using std::cout;

Complex::Complex(double real, double imaginary) :real(real), imaginary(imaginary)
{
}

Complex Complex::operator-(const Complex &minus)const
{
	return Complex(real - minus.real, imaginary - minus.imaginary);
}

Complex Complex::operator+(const Complex &plus)const
{
	return Complex(real + plus.real, imaginary + plus.imaginary);
}

Complex Complex::operator==(const Complex &equals)const
{
	return Complex(real == equals.real, imaginary == equals.imaginary);
}

Complex Complex::operator!=(const Complex &notequal)const
{
	return Complex(real != notequal.real, imaginary != notequal.imaginary);
}

Complex Complex::operator*(const Complex &mult)const
{
	return Complex(real *mult.real, imaginary* mult.imaginary);
}

Complex Complex::operator/(const Complex &div)const
{
	return Complex(real / div.real, imaginary / div.imaginary);
}

Complex Complex::operator<<(const Complex &left)const
{
	return Complex(real < left.real, imaginary < left.imaginary);
}

Complex Complex::operator>>(const Complex &right)const
{
	return Complex(real > right.real, imaginary > right.imaginary);
}


void Complex::print() const
{
	cout << "(" << real << "," << imaginary << ")";
}

