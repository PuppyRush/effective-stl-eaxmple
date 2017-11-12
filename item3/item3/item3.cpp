#include <vector>	
#include <iostream>
using namespace std;

class Widget {

public:

	int number;

	Widget() {
		cout << "called default constructor" << endl;
		cout << this << endl;
		number = 1;
	}

	Widget(const Widget& widget) {
		cout << "called copy constructor :: ";
		cout << &widget  << "->" << this << endl;
		number = widget.number;
	}

	void operator=(const Widget& widget) {
		cout << "called assign operator" << endl;
		number = widget.number;
	}

};

int main() {

	vector<Widget> w;

	w.push_back(Widget());

	cout << "the address of 1st element is " << &w[0] << endl << endl;

	vector<Widget> ww(5);
	ww.push_back(Widget());

	for (int i = 0; i < ww.size(); i++)
		cout << "the address of "<< i+1 <<"th element is " << &ww[i] << endl;

	Widget myWidget = w[0];
	cout << "a myWidget address is " << &myWidget << endl;

}