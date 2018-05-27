#include "includeIndicator.hpp"


bool comp_ptr(const int* lhs, const int *rhs)
{
	return lhs < rhs;
}

void item20()
{
	set<int> ary;
	ary.insert(3);
	ary.insert(4);
	printer::printRange<int>(ary.begin(), ary.end());
	printer::printRange<int>(ary.begin(), ary.end()); printer::print("ptr타입이 아니면 정상출력");
	printer::enter(2);


	set<int*> ptrary;
	ptrary.insert(new int(30));
	ptrary.insert(new int(5));
	ptrary.insert(new int(10));
	ptrary.insert(new int(141));
	ptrary.insert(new int(15));
	printer::printRange<int*>(ptrary.begin(), ptrary.end());
	printer::print("set의 의도와 달리 순서가 이상하게 출력되고 있음.");
	printer::enter(2);

	set<int*, less<int*>> s;
	s.insert(new int(10));
	s.insert(new int(9));
	s.insert(new int(8));
	s.insert(new int(7));
	s.insert(new int(8));
	s.insert(new int(1));
	s.insert(new int(51));
	printer::printRange<int*>(s.begin(), s.end());
	printer::print("less<int*>으로도 포인터(주소)를 비교하고 있으므로 주소로 정렬이 됨.");
	printer::enter(2);

	printer::print("comp_ptr함수 호출");
	cout << "\n" << comp_ptr(new int(3), new int(1)) << "\n";


	const auto ptrcomp = [&](const int *lhs, const int *rhs){
		return *lhs < *rhs;
	};

	printer::enter(2);
	set<int*, decltype(ptrcomp)> ptr_compset(ptrcomp);
	ptr_compset.insert(new int(34));
	ptr_compset.insert(new int(32));
	ptr_compset.insert(new int(1));
	ptr_compset.insert(new int(151));
	ptr_compset.insert(new int(-5));
	printer::printRange<int*>(ptr_compset.begin(), ptr_compset.end());
	printer::print("pointer type을 위한 비교함수를 특별히 정의하여 set생성자에서 이용");
	printer::enter(2);


}
