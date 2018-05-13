#include <set>
#include <iostream>
using namespace std;

int main() {

	auto comp = [](const int *lhs, const int* rhs)->bool
	{
		return *lhs < *rhs;
	};

	set<int*, less<int*>> s;

	s.insert(new int(10));
	s.insert(new int(9));
	s.insert(new int(8));
	s.insert(new int(7));
	s.insert(new int(8));
	s.insert(new int(1));
	s.insert(new int(51));

	for each(auto val in s)
		cout << val << endl;

	for each(auto val in s)
		cout << *val << endl;

	set<string*, less<string*>> str;
	str.insert(new string("asd"));
	str.insert(new string("dds"));
	str.insert(new string("esad"));

}