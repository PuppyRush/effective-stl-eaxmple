#include <vector>
#include "widget.h"
using namespace std;

int main() {

	vector<Widget> v1;
	vector<Widget> v2;
	vector<Widget> v3;

	v1.push_back(Widget());
	v1.push_back(Widget());
	v1.push_back(Widget());

	//v2.reserve(3);
	v2.push_back(Widget());
	vector<Widget>::iterator it = v2.begin();
	auto newIt= v2.insert(v2.begin(), v1.begin(), v1.end());	
													
	v3.resize(1);
	v3[0] = v1[0];

	vector<int> vi;

	auto _vi = vi.begin();
	for (int i = 0; i < 100; i++)
		_vi = vi.insert(_vi, i);
}