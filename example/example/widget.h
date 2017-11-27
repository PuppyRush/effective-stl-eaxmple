#include <iostream>

using namespace std;


class Widget {

public:

	int number;

	Widget() {
		cout << "called default constructor (address is " << this <<")" << endl;
		number = 1;
	}

	Widget(const Widget& widget) {
		cout << "called copy constructor :: ";
		cout << &widget  << "->" << this << endl;
		number = widget.number;
	}

	void operator=(const Widget& widget) {
		cout << "called assign operator" << endl;
		cout << &widget << "->" << this << endl;
		number = widget.number;
	}

};
