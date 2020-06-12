#include "Complex.h"



double Complex::getrealpart() const
{
	return realpart;
}

double Complex::getvirtualpart() const
{
	return virtualpart;
}

double Complex::Add(double a, double b, double& c, double& d)
{
	c = a + realpart;
	d = b + virtualpart;
	return 0;
}

double Add(double a, double b, Complex& c, double& realpart, double& virtualpart)
{
	realpart = a + c.realpart;
	virtualpart = b + c.virtualpart;
	return 0;
}



