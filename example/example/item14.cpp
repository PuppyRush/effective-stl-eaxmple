//#include <string>
//#include <vector>
//#include <iostream>
//
//using namespace std;
//
//class Widget {
//
//public:
//
//	int number;
//
//	Widget() {
//		cout << "called default constructor" << endl;
//		cout << this << endl;
//		number = 1;
//	}
//
//	Widget(const Widget& widget) {
//		cout << "called copy constructor :: ";
//		cout << &widget  << "->" << this << endl;
//		number = widget.number;
//	}
//
//	void operator=(const Widget& widget) {
//		cout << "called assign operator" << endl;
//		number = widget.number;
//	}
//
//};
//
//
//int main() {
//
//	vector<Widget> v;
//	v.reserve(5);
//
//	v.push_back(Widget());
//	v.push_back(Widget());
//
//	v.resize(4);
//	v.resize(7);
//	cout << &v[0];
//}