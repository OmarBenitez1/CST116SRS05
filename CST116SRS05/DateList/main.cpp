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

	if (y >= 1901 & y <= 2099)
	{
		if (y1 >= 1901 & y1 <= 2099)
		{

		}

	}

	else
	{
		std::cout << "Stop being bad!! Restart";
	}
    return 0;
}

