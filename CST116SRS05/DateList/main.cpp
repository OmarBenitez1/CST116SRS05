// DateList.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <istream>

int main()
{
	int y{ };
	int y1{};
	int m{  };
	int m1{};
	int d{  };
	int d1{};
	char dors{};


	std::cin >> y >> dors >> m >> dors >> d;
	std::cin >> y1 >> dors >> m1 >> dors >> d1;

	while(y >= 1901 && y <= 2099 && y1 >= 1901 && y1 <= 2099 && m >= 1 && m <= 12 && m1 >= 1 & m1 <= 12)
	{
		if (y > y1 || (y == y1 && m > m1) || (y == y1 && m == m1 && d > d1))
		{

		}
		if (y1 > y || (y == y1 && m1 > m) || (y == y1 && m == m1 && d1 > d))
		{

		}
	}
    return 1;
}
/*leap years start 1904*/
//leap year bool leapyear = y % 4 == 0
