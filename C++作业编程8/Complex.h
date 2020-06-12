#pragma once
class Complex
{
public:
	Complex(double a, double b) :realpart(a), virtualpart(b) {}
	double Add(double a, double b, double& c, double& d);
	double getrealpart() const;
	double getvirtualpart() const;
private:
	double realpart;
	double virtualpart;
	friend double Add(double a, double b, Complex& c, double& realpart, double& virtualpart);
};

