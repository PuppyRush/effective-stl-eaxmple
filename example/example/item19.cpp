#include <set>
#include <map>
#include <iostream>
#include "widget.h"
using namespace std;

bool Widget::tested = true;
int main() {
	
	const auto comp = [](const Widget& lhs, const Widget& rhs)->bool
	{
		return lhs.number < rhs.number;
	};

	set < Widget, decltype(comp)> s(comp);
	s.insert(Widget(1));
	s.insert(Widget(3));
	s.insert(Widget(5));
	
	const Widget w(3);
	if (s.find(w) != s.end())
		cout << "find!";

	if (s.insert(Widget(2)).second == false)
		cout << "duplication";

	multiset<int> mu;
	mu.insert(3);
}