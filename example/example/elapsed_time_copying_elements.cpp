#include "includeIndicator.hpp"

#define SIZE 20000000l

void test_copy() {
	vector<Widget> v(SIZE);

	ELASPED_TIME et;

	et.begin();

	for (int i = 0; i < SIZE; i++)
		v[i] = Widget(1);

	et.end("�����ʱ�ȭ�� �ҿ�� �ð�");

	vector<Widget> v2(SIZE);

	et.begin();

	for (int i = 0; i < SIZE; i++)
		v2[i] = v[i];

	et.end("������Կ��꿡 �ҿ�� �ð�");

	et.begin();
	vector<Widget*> pv(SIZE);
	for (int i = 0; i < SIZE; i++)
		pv[i] = new Widget();
	et.end("�޸��Ҵ� �ʱ�ȭ �ҿ�ð�");

	et.begin();

	vector<Widget*> pv2(SIZE);
	for (int i = 0; i < SIZE; i++)
		pv2[i] = pv[1];

	et.end("�����ʹ��Կ��꿡 �ҿ� �ð�");
}