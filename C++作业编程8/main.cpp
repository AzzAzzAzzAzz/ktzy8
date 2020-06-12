#include<iostream>
#include"Complex.h"
using namespace std;

int main() 
{
	Complex c1(3.0, 5.0);
	Complex c2(4.0, 8.0);
	double realpart, virtualpart;
	c1.Add(c2.getrealpart(), c2.getvirtualpart(), realpart, virtualpart);
	cout << "c1 = " << c1.getrealpart() << "+" << c1.getvirtualpart() << "i" << endl;
	cout << "c2 = " << c2.getrealpart() << "+" << c2.getvirtualpart() << "i" << endl;
	cout << "c3 = " << realpart << "+" << virtualpart << "i" << endl;
	Add(realpart, virtualpart, c2, realpart, virtualpart);
	cout << "c4 = " << realpart << "+" << virtualpart << "i" << endl;

	return 0;

}