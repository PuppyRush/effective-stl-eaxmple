#include <iostream>
#include <vector>
#include <string>
using namespace std;


void fn(const char* ptr) {

}

int main() {

	vector<char> vc;
	vc.push_back('a');
	vc.push_back('d');
	
	fn(&vc[0]);

	int a[10];

	fill(a, a + 10, 5);
	
	string s("string");
	cout << strlen(s.c_str());

}
