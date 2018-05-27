#include "includeIndicator.hpp"

void item14() 
{

	//std::vector<Widget>::size_type sz;

	//std::vector<Widget> foo;
	//sz = foo.capacity();
	//std::cout << "making foo grow:\n";
	//for (int i = 0; i<100; ++i) {
	//	foo.push_back(Widget(true,i));
	//	if (sz != foo.capacity()) {
	//		sz = foo.capacity();
	//		std::cout << "capacity changed: " << sz << '\n';
	//	}
	//}

	//std::vector<Widget> bar;
	//sz = bar.capacity();
	//bar.reserve(100);   // this is the only difference with foo above
	//std::cout << "making bar grow:\n";
	//for (int i = 0; i<100; ++i) {
	//	bar.push_back(Widget(true,i));
	//	if (sz != bar.capacity()) {
	//		sz = bar.capacity();
	//		std::cout << "capacity changed: " << sz << '\n';
	//	}
	//}

	vector<Widget> v;
	v.reserve(100);
	
	v.push_back(Widget(true,1));
	cout << "---" << endl;
	v.push_back(Widget(true,2));
	cout << "---" << endl;
	v.push_back(Widget(true, 3));

	
	//cout << v.capacity();
	//v.resize(4);
	//v.resize(7);
	//cout << &v[0];
}
