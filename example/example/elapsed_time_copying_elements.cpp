#include "includeIndicator.hpp"

#define SIZE 20000000l

void test_copy() {
	vector<Widget> v(SIZE);

	ELASPED_TIME et;

	et.begin();

	for (int i = 0; i < SIZE; i++)
		v[i] = Widget(1);

	et.end("대입초기화에 소요된 시간");

	vector<Widget> v2(SIZE);

	et.begin();

	for (int i = 0; i < SIZE; i++)
		v2[i] = v[i];

	et.end("복사대입연산에 소요된 시간");

	et.begin();
	vector<Widget*> pv(SIZE);
	for (int i = 0; i < SIZE; i++)
		pv[i] = new Widget();
	et.end("메모리할당 초기화 소요시간");

	et.begin();

	vector<Widget*> pv2(SIZE);
	for (int i = 0; i < SIZE; i++)
		pv2[i] = pv[1];

	et.end("포인터대입연산에 소요 시간");
}