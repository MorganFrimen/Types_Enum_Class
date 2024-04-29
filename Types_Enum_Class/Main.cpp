#include <iostream>
#include <string_view>

enum class Month {
	Jan = 1, January = Jan, Fev, Mar,
	Apr, May, Jun,
	Jul, Aug, Sep,
	Oct, Nov, Dec
};
 
std::string_view month_to_string(Month month)
{
	switch (month)
	{
		using enum Month;
			case Jan: return "January";
			case Fev: return "February";
			case Mar: return "Marth";
			case Apr: return "April";
			case May: return "May";
			case Jun: return "June";
			case Jul: return "July";
			case Aug: return "August";
			default: return "None";
	}
}

int main()
{
	Month month{ Month::May };
	std::cout << "month : " << month_to_string(month) << std::endl;
	
}
