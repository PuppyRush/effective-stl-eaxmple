//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <set>
//using namespace std;
//
//
//int main() {
//
//	vector<int> v;
//	for (int i = 0; i < 10; i++) {
//		v.push_back(i);
//	}
//
//	v.erase(std::remove(v.begin(), v.end(), 5));
//
//	for (auto it = v.begin(); it != v.end();it++) {
//
//		if ((*it) % 2 == 0)
//			v.erase(it);
//	
//
//	}
//
//	set<int> s;
//	for (int i = 0; i < 10; i++) {
//		s.insert(i);
//	}
//
//	for (auto it = s.begin(); it != s.end();) {
//
//		if ((*it) % 2 == 0)
//			it = s.erase(it);
//		else
//			it++;
//
//	}
//
//}