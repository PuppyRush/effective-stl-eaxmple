//#include <vector>
//#include <time.h>
//#include "widget.h"
//#include <iostream>
//#include "util.h"
//
//using namespace std;
//
//#define SIZE 20000000l
//
//int main() {
//	vector<Widget> v(SIZE);
//
//	ELASPED_TIME time;
//	time.BEGIN();
//
//	for (int i = 0; i < SIZE; i++)
//		v[i] = Widget();
//
//	time.END("�����ʱ�ȭ�� �ҿ�� �ð�");
//
//	vector<Widget> v2(SIZE);
//
//	time.BEGIN();
//
//	for (int i = 0; i < SIZE; i++)
//		v2[i] = v[i];
//
//	time.END("������Կ��꿡 �ҿ�� �ð�");
//
//	time.BEGIN();
//	vector<Widget*> pv(SIZE);
//	for (int i = 0; i < SIZE; i++)
//		pv[i] = new Widget();
//	time.END("�޸��Ҵ� �ʱ�ȭ �ҿ�ð�");
//
//	time.BEGIN();
//
//	vector<Widget*> pv2(SIZE);
//	for (int i = 0; i < SIZE; i++)
//		pv2[i] = pv[1];
//
//	time.END("�����ʹ��Կ��꿡 �ҿ� �ð�");
//}