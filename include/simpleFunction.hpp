#ifndef SFML_FGD_SIMPLEFUNCTION_HPP
#define SFML_FGD_SIMPLEFUNCTION_HPP
using namespace std;

class SimpleFunction {
public:
	double k, b; // For linear functions
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

class 

#endif
