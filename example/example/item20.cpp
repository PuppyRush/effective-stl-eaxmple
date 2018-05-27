#include "includeIndicator.hpp"

void item20()
{
	set<int*> ptrary;

	ptrary.insert(new int(30));
	ptrary.insert(new int(5));
	ptrary.insert(new int(10));
	ptrary.insert(new int(141));
	ptrary.insert(new int(15));

	set<int> ary;
	ary.insert(3);
	ary.insert(4);

	printer::print("set의 의도와 달리 순서가 이상하게 출력되고 있음.");
	printer::printRange<int*>(ptrary.begin(), ptrary.end());
	printer::enter(2);

	printer::print("ptr타입이 아니면 정상출력");
	printer::printRange<int>(ary.begin(), ary.end());


	const auto ptrcomp = [&](const int *lhs, const int *rhs){
		return *lhs < *rhs;
	};

	printer::enter(2);
	printer::print("pointer type을 위한 비교함수를 특별히 정의하여 set생성자에서 이용");
	set<int*, decltype(ptrcomp)> ptr_compset(ptrcomp);
	ptr_compset.insert(new int(34));
	ptr_compset.insert(new int(32));
	ptr_compset.insert(new int(1));
	ptr_compset.insert(new int(151));
	ptr_compset.insert(new int(-5));

	printer::enter(2);
	printer::printRange<int*>(ptr_compset.begin(), ptr_compset.end());
}

