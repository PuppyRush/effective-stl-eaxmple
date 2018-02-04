#pragma once

#include <time.h>
#include <iostream>

using namespace std;


typedef struct ELASPED_TIME {
private:
	clock_t begin, end;
public:

	void BEGIN() {
		begin = clock();        // �ð�����
	}

	void END(const string msg="�ҿ�ð�") {

		end = clock();          // �ð�����
		cout << msg.c_str() <<  " : " << ((end - begin) / CLOCKS_PER_SEC) << "ms" << endl;
	}
};