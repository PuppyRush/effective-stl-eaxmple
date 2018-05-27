#pragma once

#include <vector>

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


typedef struct printer
{
public:

	template <class T, class _it>
	static void printRange(_it begin, const _it end, const bool _enter=true)
	{
		const auto entercnt = _enter ? 1 : 0;

		while(begin != end)
		{
			_print(begin, is_pointer<T>());
			begin++;
			enter(entercnt);
		}
	}

	static void enter(const size_t count=1)
	{
		for(size_t c=0 ; c < count ; c++)
			cout << "\n";
	}

	static void print(const string &str)
	{
		cout << str.c_str() << "\n";
	}
private:

	template <class _it>
	static void _print(_it it, std::true_type)
	{
		cout << **it;
	}

	template <class _it>
	static void _print(_it it, std::false_type)
	{
		cout << *it;
	}
};