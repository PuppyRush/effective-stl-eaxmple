//#include <vector>	
//#include <iostream>
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
//int main() {
//	cout << "1-----------------------------" << endl << endl;
//	vector<Widget> w;
//
//	w.push_back(Widget());
//
//	cout << "the address of 1st element is " << &w[0] << endl << endl;
//
//	cout << "2-----------------------------" << endl << endl;
//
//	vector<Widget> ww(5);
//	ww.push_back(Widget());
//
//	for (int i = 0; i < ww.size(); i++)
//		cout << "the address of "<< i+1 <<"th element is " << &ww[i] << endl;
//
//	Widget myWidget = ww[0];
//	cout << "a myWidget address is " << &myWidget << endl;
//
//	cout << "3-----------------------------" << endl << endl;
//
//	vector<Widget> www;
//	www.reserve(10);
//
//	www.push_back(Widget());
//	www.push_back(Widget());
//	cout << "the address of 1st element is " << &www[0] << endl;
//
//	cout << "4-----------------------------" << endl << endl;
//
//	vector<Widget*> ptrVector;
//	ptrVector.push_back(new Widget());
//	auto ptrWidget = ptrVector[0];
//	cout << ptrVector[0] << " = " << &(*ptrWidget);
//}