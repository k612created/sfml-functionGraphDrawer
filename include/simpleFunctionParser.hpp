#ifndef SFML_FGD_SIMPLEFUNCTIONPARSER_HPP
#define SFML_FGD_SIMPLEFUNCTIONPARSER_HPP
#include <string>
#include "simpleFunction.hpp"
using namespace std;

class FunctionParser {
	public:
	// \description This function returns a SimpleFunction Pointer that represents the function the program received.
	// \restriction The unknown variable must be defined as 'x' in the string and we do not accept fractions as constants.
	//		We also require the function being the most simple one.
	SimpleFunction * Parse(string FunctionString) {
		SimpleFunction * rtn; // The pointer that this function returns.
		string::size_type	Power2 = FunctionString.find("^2"), // The power of 2, which represents the function is a quadratic function
					Divide = FunctionString.find("/");  // The backslash which represents 
		return rtn;
};

#endif
