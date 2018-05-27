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

	printer::print("set�� �ǵ��� �޸� ������ �̻��ϰ� ��µǰ� ����.");
	printer::printRange<int*>(ptrary.begin(), ptrary.end());
	printer::enter(2);

	printer::print("ptrŸ���� �ƴϸ� �������");
	printer::printRange<int>(ary.begin(), ary.end());


	const auto ptrcomp = [&](const int *lhs, const int *rhs){
		return *lhs < *rhs;
	};

	printer::enter(2);
	printer::print("pointer type�� ���� ���Լ��� Ư���� �����Ͽ� set�����ڿ��� �̿�");
	set<int*, decltype(ptrcomp)> ptr_compset(ptrcomp);
	ptr_compset.insert(new int(34));
	ptr_compset.insert(new int(32));
	ptr_compset.insert(new int(1));
	ptr_compset.insert(new int(151));
	ptr_compset.insert(new int(-5));

	printer::enter(2);
	printer::printRange<int*>(ptr_compset.begin(), ptr_compset.end());
}

