//#include <vector>
//#include "widget.h"
//using namespace std;
//
//void printLine() {
//
//	cout << "----------------------------" << endl;
//
//}
//
//int main() {
//
//	vector<Widget> v1;
//	vector<Widget> v2;
//	vector<Widget> v3;
//
//	Widget w1;
//	Widget w2;
//	Widget w3;
//
//	v1.push_back(w1);
//	v1.push_back(w2);
//	v1.push_back(w3);
//
//	printLine();
//
//	v2.assign(v1.begin(), v1.end());
//
//	printLine();
//
//	v3 = vector<Widget>(v1.begin(), v1.begin() + 3);
//
//	printLine();
//
//	v3.resize(1);
//	v3[0] = v1[0];
//
//	printLine();
//
//	vector<Widget> v4;
//	v4.insert(v4.end(), v1.begin(), v1.end());
//	
//	cout << v4.capacity();
//
//
//	vector<int> v;
//	v.push_back(3);
//	v.push_back(4);
//}