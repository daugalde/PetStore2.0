#pragma once
#include <iostream>
#include <regex>

using namespace std;

class Helpers {

public:

	Helpers() {}

	bool static Is_number(const std::string& s)
	{
		return !s.empty() && std::find_if(s.begin(),
			s.end(), [](unsigned char c) { return !std::isdigit(c); }) == s.end();
	}

	bool static Is_NOT_EmptyOrWhiteSpace(const std::string& s)
	{
		return !s.empty() && !(s.find_first_not_of(' ') == s.npos);
	}

	std::string ltrim(const std::string& s) {
		return std::regex_replace(s, std::regex("^\\s+"), std::string(""));
	}

	std::string rtrim(const std::string& s) {
		return std::regex_replace(s, std::regex("\\s+$"), std::string(""));
	}

	std::string trim(const std::string& s) {
		return ltrim(rtrim(s));
	}

	// GFG TAKEN
	struct Date {
		int d, m, y;
	};

	int static CountLeapYears(Date d)
	{
		int years = d.y;

		if (d.m <= 2)
			years--;

		return years / 4
			- years / 100
			+ years / 400;
	}

	int static GetDateDifferenceInDays(int day, int month, int year, int day2, int month2, int year2)
	{
		Date dt1 = { day, month, year };
		Date dt2 = { day2, month2, year2 };

		int monthDays[12]
			= { 31, 28, 31, 30, 31, 30,
			   31, 31, 30, 31, 30, 31 };

		long int n1 = dt1.y * 365 + dt1.d;

		for (int i = 0; i < dt1.m - 1; i++)
			n1 += monthDays[i];

		n1 += CountLeapYears(dt1);

		long int n2 = dt2.y * 365 + dt2.d;
		for (int i = 0; i < dt2.m - 1; i++)
			n2 += monthDays[i];
		n2 += CountLeapYears(dt2);

		//Difference in days
		return (n2 - n1);
	}
	// GFG TAKEN
};