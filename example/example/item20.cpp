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
	printer::printRange<int>(ary.begin(), ary.end()); printer::print("ptrŸ���� �ƴϸ� �������");
	printer::enter(2);


	set<int*> ptrary;
	ptrary.insert(new int(30));
	ptrary.insert(new int(5));
	ptrary.insert(new int(10));
	ptrary.insert(new int(141));
	ptrary.insert(new int(15));
	printer::printRange<int*>(ptrary.begin(), ptrary.end());
	printer::print("set�� �ǵ��� �޸� ������ �̻��ϰ� ��µǰ� ����.");
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
	printer::print("less<int*>���ε� ������(�ּ�)�� ���ϰ� �����Ƿ� �ּҷ� ������ ��.");
	printer::enter(2);

	printer::print("comp_ptr�Լ� ȣ��");
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
	printer::print("pointer type�� ���� ���Լ��� Ư���� �����Ͽ� set�����ڿ��� �̿�");
	printer::enter(2);


}
