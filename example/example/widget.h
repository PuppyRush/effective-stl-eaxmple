
#pragma once

#include <iostream>

using namespace std;


class Widget {

public:

	bool tested;
	int number;

	Widget(int num=0, const bool b=true)
		:tested(b), number(num)
	{
		if(tested)
			cout << "called default constructor (address is " << this <<")" << endl;
	}

	Widget(const Widget& widget)
	{
		if (tested) {
			cout << "called copy constructor :: ";
			cout << &widget << "->" << this << endl;
		}
		number = widget.number;
	}

	void setTest(const bool b)
	{
		tested = b;
	}

	explicit Widget(const Widget &&widget, bool b = true)
	{
		if(tested)
		{
			cout << "called copy constructor :: ";
			cout << &widget << "->" << this << endl;
		}
		number = widget.number;
	}

	~Widget() 
	{
		if (tested)
			cout << "called default destroyer(address : " << this << " , widget number is : " << number << ")\n";
	}

	Widget& operator=(const Widget &widget)
	{
		if (tested) 
		{
			cout << "called assign operator" << endl;
			cout << &widget << "->" << this << endl;
		}

		number = widget.number;
		return *this;
	}

	Widget& operator=(Widget &&widget)
	{
		if(tested)
		{
			cout << "called assign operator" << endl;
			cout << &widget << "->" << this << endl;
		}

		number = widget.number;
		return *this;
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

class WidgetEx : public Widget
{
public:
	WidgetEx(const Widget &w = Widget())
		:Widget(w.number, w.tested)
	{

	}
};