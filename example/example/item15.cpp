#include "includeIndicator.hpp"

void item15() {

	string s("abc");
	string ss("abc");
	cout << &s << " " << &ss;

	std::string   x("This is a string");
	char&         x5 = x[5];
	std::string   y(x);

	x5 = '*';

}