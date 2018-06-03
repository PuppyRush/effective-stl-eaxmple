#include "includeIndicator.hpp"

struct item
{
	int decimal;
	string str;

	item(int d, string s)
		:decimal(d), str(s)
	{}
	
};

void item21()
{
	const auto comp = [&](const item &lhs, const item &rhs)
	{
		return lhs.decimal < rhs.decimal ?
			true : lhs.str.compare(rhs.str) ?
			true : false;
	};

	set<item, decltype(comp) > s(comp);

	s.insert(item(4,"sd"));
	s.insert(item(3, "sd"));

}