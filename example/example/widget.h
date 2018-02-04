#include <iostream>

using namespace std;

class Widget {

public:

	bool tested;
	int number;

	explicit Widget(bool b=true,int num=-1):tested(b) {
		if(tested)
			cout << "called default constructor (address is " << this <<")" << endl;
		number = num;
	}

	explicit Widget(const Widget& widget, bool b = true) :tested(b) {
		if (tested) {
			cout << "called copy constructor :: ";
			cout << &widget << "->" << this << endl;
		}
		number = widget.number;
	}

	~Widget() {
		if (tested)
			cout << "called default destroyer(address : " << this << " , widget number is : " << number << ")\n";
	}

	void operator=(const Widget& widget) {
		if (tested) {
			cout << "called assign operator" << endl;
			cout << &widget << "->" << this << endl;
		}
		number = widget.number;
	}

	
};

