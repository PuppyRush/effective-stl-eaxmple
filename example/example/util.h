#pragma once

#include <time.h>
#include <iostream>

using namespace std;


typedef struct ELASPED_TIME 
{
private:
	clock_t m_start, m_end;

public:

	void begin() 
	{
		m_start = clock();        // 시간설정
	}

	void end(const string msg="소요시간") 
	{

		m_end = clock();          // 시간설정
		cout << msg.c_str() <<  " : " << ((m_end - m_start) / CLOCKS_PER_SEC) << "ms" << endl;
	}
};