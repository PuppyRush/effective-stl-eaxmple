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
//	time.END("대입초기화에 소요된 시간");
//
//	vector<Widget> v2(SIZE);
//
//	time.BEGIN();
//
//	for (int i = 0; i < SIZE; i++)
//		v2[i] = v[i];
//
//	time.END("복사대입연산에 소요된 시간");
//
//	time.BEGIN();
//	vector<Widget*> pv(SIZE);
//	for (int i = 0; i < SIZE; i++)
//		pv[i] = new Widget();
//	time.END("메모리할당 초기화 소요시간");
//
//	time.BEGIN();
//
//	vector<Widget*> pv2(SIZE);
//	for (int i = 0; i < SIZE; i++)
//		pv2[i] = pv[1];
//
//	time.END("포인터대입연산에 소요 시간");
//}