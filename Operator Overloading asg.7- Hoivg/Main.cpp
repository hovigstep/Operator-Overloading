#include <iostream>
#include "Complex.h"

using namespace std;

int main()
{
	Complex a;
	Complex b(1.6,5.4);
	Complex c(6.1,4.3);

	cout << "a :" << endl;
	a.print();
	cout << "b :" << endl;
	b.print();
	cout << "c :" << endl;
	c.print();

	a = b + c;
	cout << "a=b+c :" << endl;
	a.print();
	cout << "=" << endl;
	b.print();
	cout << "+" << endl;
	c.print();

	a = b - c;
	cout << "a=b-c :" << endl;
	a.print();
	cout << "=" << endl;
	b.print();
	cout << "-" << endl;
	c.print();

	a = b*c;
	cout << "a=b*c :" << endl;
	a.print();
	cout << "=" << endl;
	b.print();
	cout << "*" << endl;
	c.print();

	a = b / c;
	cout << "a=b/c :" << endl;
	a.print();
	cout << "=" << endl;
	b.print();
	cout << "/" << endl;
	c.print();

	a = b << c;
	cout << "a= b << c :" << endl;
	a.print();
	cout << "=" << endl;
	b.print();
	cout << "<<" << endl;
	c.print();

	a = b >> c;
	cout << "a=b>>c :" << endl;
	a.print();
	cout << "=" << endl;
	b.print();
	cout << ">>" << endl;
	c.print();

	a = b == c;
	cout << "a=b==c :" << endl;
	a.print();
	cout << "=" << endl;
	b.print();
	cout << "==" << endl;
	c.print();

	a = b != c;
	cout << "a= b!= c :" << endl;
	a.print();
	cout << "=" << endl;
	b.print();
	cout << "!=" << endl;
	c.print();


	return 0;
}