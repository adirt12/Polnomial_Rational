//#include <iostream>
//#include "Polynomial.h"
//#include "Rational.h"
////#include "Rational.h"
//
//
//double getDegree(const Polynomial& p, bool what)
//{
//	return p.getDegree(what);
//}
//double getCoeff(const Polynomial & p, int index)
//{
//	return p.getCoeff(index);
//}
//void testPolynomial()
//{
//	cout << "----- start testPolynomial ---------" << endl;
//	cout << "test0 :" << Polynomial::getMaxDegree() << endl;
//	Polynomial p1;
//	cout << "test1: ";
//	p1.print();
//	Polynomial p2(6);
//	p2.setCoeff(2, 0.4);
//	cout << "test2: ";
//	p2.print();
//	cout << "degree=" << p2.getDegree(false) << endl;
//	double c[] = { 0.1, 0.2, 0 ,11.5, 1.3, 0, 0 };
//	Polynomial p3(c, 5);
//	int val[2];
//	val[0] = getDegree(p3, true);
//	val[1] = getDegree(p3, false);
//	cout << "test3: ";
//	p3.print();
//
//	p2.setCoeff(2, 0.0);
//	cout << "test4: ";
//	p2.print();
//	cout << "test6 :maxDegree = " << Polynomial::getMaxDegree() << endl;
//	cout << "______________" << endl;
//}
//
//void testRational() {
//	cout << "----- start testRational ---------" << endl;
//	cout << "test7" << endl;
//	Rational r1;
//	r1.print();
//	double c[] = { 0,2,2,3,4,5 };
//	Polynomial p1(c, 5);
//	c[0] = 1.2;
//	Polynomial p2(c, 3);
//	Rational r2(p1, p2);
//	cout << "test8" << endl;
//	r2.print();
//	cout << "test9" << endl;
//	cout << "nom = ";
//	r2.getNom().print();
//	double val[5];
//	val[0] = getCoeff(r2.getNom(), 1);
//	val[1] = getCoeff(r2.getNom(), 5);
//	cout << "denom = ";
//	r2.getDenom().print();
//	val[2] = getCoeff(r2.getDenom(), 0);
//	val[3] = getCoeff(r2.getDenom(), 15);
//	val[4] = getCoeff(r2.getDenom(), -1);
//	cout << "test10 :maxDegree = " << Polynomial::getMaxDegree() << endl;
//	cout << "__________________________" << endl;
//}
//
//int main()
//{
//	testPolynomial();
//	testRational();
//
//}

#include <iostream>
#include "Polynomial.h"
#include "Rational.h"
double getCoefficient(const Polynomial& p, int n)
{
	return p.getCoeff(n);
}
void testPolynomial()
{
	cout << "----- start testPolynomial ---------" << endl;
	cout << "test0 :" << Polynomial::getMaxDegree() << endl;
	Polynomial p1(9);
	cout << "test1: " << p1;
	Polynomial p2(16);
	p2.setCoeff(2, 0.4);
	cout << "test2: " << p2 << "degree=" << p2.getDegree(false) << endl;
	double c[5] = { 0.1, 0.2, 0 ,11.5, 1.3 };
	Polynomial p3(c, 4);
	cout << "test3: " << p3;
	p2.setCoeff(2, 0.0);
	cout << "test4: " << p2;
	p2 = (p1 + 2.5 * p3 - 0.9 * p3) * p3;
	double v[4];
	v[0] = getCoefficient(p2, 3);
	v[1] = getCoefficient(p2, 0);
	v[2] = getCoefficient(p2, -1);
	v[3] = getCoefficient(p2, 10);
	cout << "test6 :maxDegree = " << Polynomial::getMaxDegree() << endl;
	cout << "______________" << endl;
}
void testRational() {
	cout << "----- start testRational ---------" << endl;
	cout << "test7" << endl;
	Rational r1;
	r1.print();
	cout << r1;
	double c[] = { 0,2,2,3,4,5 };
	Polynomial p1(c, 5);
	c[0] = 1.2;
	Polynomial p2(c, 3);
	Rational r2(p1, p2);
	cout << "test8" << endl;
	r2.print();
	cout << endl << r2 << endl;
	cout << "test9" << endl;
	cout << "Numerator is " << r2.getNom();
	cout << "Denominator is " << r2.getDenom();
	Rational r3 = r2 * r2 + r2;
	cout << "test10" << endl;
	double v[8];
	v[0] = getCoefficient(r3.getNom(), 3);
	v[1] = getCoefficient(r3.getNom(), 0);
	v[2] = getCoefficient(r3.getNom(), -1);
	v[3] = getCoefficient(r3.getNom(), 10);
	v[4] = getCoefficient(r3.getDenom(), 3);
	v[5] = getCoefficient(r3.getDenom(), 0);
	v[6] = getCoefficient(r3.getDenom(), -1);
	v[7] = getCoefficient(r3.getDenom(), 10);
	double d[21] = { 0 };
	d[0] = 1;
	Polynomial p3(d, 20);
	Rational r4(p3, p3);
	r4 = (r2 + r4) * r2;
	cout << "test11 : r4 = " << endl << r4 << endl;
	cout << "test12 :maxDegree = " << Polynomial::getMaxDegree() << endl;
	cout << "__________________________" << endl;
}

int main()
{
	//testPolynomial();
	//testRational();
	double c[] = { 0,2,2,3,4,5 };
	double d[] = { 1.2,2.5,5.5,3.7,4.2,5 };
	Polynomial p1(c, 5);
	Polynomial p2(d, 5);
	Rational r4(p1, p2);
	cout <<"r4 : "<< r4 << endl;
	Rational r5(p2, p1);
	cout << "r5 : " << r5 << endl;
	cout << r4 + r5;//git test
}

