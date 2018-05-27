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
		m_start = clock();        // �ð�����
	}

	void end(const string msg="�ҿ�ð�") 
	{

		m_end = clock();          // �ð�����
		cout << msg.c_str() <<  " : " << ((m_end - m_start) / CLOCKS_PER_SEC) << "ms" << endl;
	}
};