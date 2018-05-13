
#pragma once

#include <iostream>

using namespace std;


class Widget {

public:

	static bool tested;
	int number;

	Widget(int num=-1) {
		if(tested)
			cout << "called default constructor (address is " << this <<")" << endl;
		number = num;
	}

	explicit Widget(const Widget& widget, bool b = true) {
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

	void operator=(const Widget& widget)
	{
		if (tested) {
			cout << "called assign operator" << endl;
			cout << &widget << "->" << this << endl;
		}
		number = widget.number;
	}

	bool operator==(const Widget& widget) const
	{
		if (tested)
			cout << "called assign operator==" << endl;

		if (number == widget.number)
			return true;
		else
			return false;
	}

	int operator<(const Widget& widget) const
	{
		if (tested)
			cout << "called assign operator<" << endl;
		return number < widget.number;
	}


	
};
//bool Widget::tested = true;
