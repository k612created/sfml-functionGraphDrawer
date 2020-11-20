#ifndef SFML_FGD_SIMPLEFUNCTION_HPP
#define SFML_FGD_SIMPLEFUNCTION_HPP

#include <exception>
using namespace std;

struct FunctionError : public exception {
	const char * what() const throw() {
		return "Error calculating the function.";
	}
};

class SimpleFunction {
	public:
	double k, b; // For linear functions and inverse proportional functions
	double a, c; // For quadratic functions
	virtual double y(double x);
};

class LinearFunction : public SimpleFunction {
	public:
	LinearFunction(double K, double B) {
		k = K;
		b = B;
	}
	double y(double x) {
		return k * x + b;
	}
};

class InversePropFunction : public SimpleFunction {
	public:
	InversePropFunction(double K) {
		k = K;
	}
	double y(double x) {
		if (x == 0) {
			throw FunctionError();
		} else return k / x;
	}
};

class QuadraticFunction : public SimpleFunction {
	public:
	QuadraticFunction(double A, double B, double C) {
		a = A;
		b = B;
		c = C;
	}
	double y(double x) {
		return a * x * x + b * x + c;
	}
};

#endif
