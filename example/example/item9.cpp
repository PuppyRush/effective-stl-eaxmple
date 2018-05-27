#include "includeIndicator.hpp"

void item9() 
{

	set<int> s;
	for (int i = 0; i < 10; i++) {
		s.insert(i);
	}

	for (auto it = s.begin(); it != s.end();it++) {

		if ((*it) % 2 == 0)
			s.erase(it);
	}

	

	for (auto it = s.begin(); it != s.end();) {

		if ((*it) % 2 == 0)
			it = s.erase(it);
		else
			it++;

	}

}