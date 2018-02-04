#pragma once

#include <time.h>
#include <iostream>

using namespace std;


typedef struct ELASPED_TIME {
private:
	clock_t begin, end;
public:

	void BEGIN() {
		begin = clock();        // 시간설정
	}

	void END(const string msg="소요시간") {

		end = clock();          // 시간설정
		cout << msg.c_str() <<  " : " << ((end - begin) / CLOCKS_PER_SEC) << "ms" << endl;
	}
};