// DataList.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <istream>
#include <cmath>

int main()
{
	int y{};
	int y1{};
	int m{};
	int m1{};
	int d{};
	int d1{};
	char dors{};
	int date1(y + m + d);
	int date2(y1 + m1 + d1);
	char slash('47');

	std::cin >> y;
	std::cin.ignore(256, ' ');
	std::cin >> m;
	std::cin.ignore(256, ' ');
	std::cin >> d;
	std::cin >> y1;
	std::cin.ignore(256, ' ');
	std::cin >> m1;
	std::cin.ignore(256, ' ');
	std::cin >> d1;

	while (date1 > date2 || date2 > date1)
	{
		if (y >= 1901 && y <= 2099 && y1 >= 1901 && y1 <= 2099 && m >= 1 && m <= 12 && m1 >= 1 & m1 <= 12)
		{
			if (y > y1 || (y == y1 && m > m1) || (y == y1 && m == m1 && d > d1))
			{
				if ((m1 == 1 || m1 == 3 || m1 == 5 || m1 == 7 || m1 == 8 || m1 == 10 || m1 == 12) && d1 <= 31 && d1 >= 1)
				{
					std::cout << std::setfill('0') << y1 << slash << std::setw(2) << m1 << slash << std::setw(2) << d1 << "  ";
					d1 + 1;
					if (d1 == 32)
					{
						m1 + 1;
						d1 = 1;
					}
				}
				else if ((m1 == 4 || m1 == 6 || m1 == 9 || m1 == 11) && d1 <= 30 && d1 >= 1)
				{
					std::cout << y1 << slash << std::setfill('0') << std::setw(2) << m1 << slash << std::setw(2) << d1 << "  ";
					d1 + 1;
					if (d1 == 31)
					{
						m1 + 1;
						d1 = 1;
					}
				}
				else if (m1 == 2)
				{
					if (((y1 % 4) == 0) && d1 <= 29 && d1 >= 1)
					{
						std::cout << y1 << slash << std::setfill('0') << std::setw(2) << m1 << slash << std::setw(2) << d1 << "  ";
						d1 + 1;
						if (d1 == 30)
						{
							m1 + 1;
							d1 = 1;
						}
					}
					else if (((y1 % 4) != 0) && d1 <= 28 && d1 >= 1)
					{
						std::cout << y1 << slash << std::setfill('0') << std::setw(2) << m1 << slash << std::setw(2) << d1 << "  ";
						d1 + 1;
						if (d1 == 29)
						{
							m1 + 1;
							d1 = 1;
						}
					}
				}
				else if (m1 == 13)
				{
					y1 + 1;
					m1 = 1;
				}
			}
			else if (y1 > y || (y == y1 && m1 > m) || (y == y1 && m == m1 && d1 > d))
			{
				if ((m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) && d <= 31 && d >= 1)
				{
					std::cout << std::setfill('0') << y << slash << std::setw(2) << m << slash << std::setw(2) << d << "  ";
					d + 1;
					if (d == 32)
					{
						m + 1;
						d = 1;
					}
				}
				else if ((m == 4 || m == 6 || m == 9 || m == 11) && d <= 30 && d >= 1)
				{
					std::cout << y << slash << std::setfill('0') << std::setw(2) << m << slash << std::setw(2) << d << "  ";
					d + 1;
					if (d == 31)
					{
						m + 1;
						d = 1;
					}
				}
				else if (m == 2)
				{
					if (((y % 4) == 0) && d <= 29 && d >= 1)
					{
						std::cout << y << slash << std::setfill('0') << std::setw(2) << m << slash << std::setw(2) << d << "  ";
						d + 1;
						if (d == 30)
						{
							m + 1;
							d = 1;
						}
					}
					else if (((y % 4) != 0) && d <= 28 && d >= 1)
					{
						std::cout << y << slash << std::setfill('0') << std::setw(2) << m << slash << std::setw(2) << d << "  ";
						d + 1;
						if (d == 29)
						{
							m + 1;
							d = 1;
						}
					}
				}
				else if (m == 13)
				{
					y + 1;
					m = 1;
				}
			}
		}
	}

	return 0;
}