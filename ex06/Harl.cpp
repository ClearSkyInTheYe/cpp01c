#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void Harl::debug()
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my ";
	std::cout << "7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!";
	std::cout << std::endl;
}

void Harl::error()
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now.";
	std::cout << std::endl;
}

void Harl::info()
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. ";
	std::cout << "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!";
	std::cout << std::endl;
}

void Harl::warning()
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. ";
	std::cout << "I’ve been coming for years whereas you started working here since last month.";
	std::cout << std::endl;
}

void Harl::complain( std::string level )
{
	int i = 0;
	void (Harl:: *p_func[4])() =
			{
					&Harl::debug,
					&Harl::info,
					&Harl::warning,
					&Harl::error,
			};
	std::string levels[5] =
			{
					"DEBUG",
					"INFO",
					"WARNING",
					"ERROR",
					"asd"
			};

	while (i <= 4 && levels[i] != level)
		i++;
	while (i > 4)
	{
		std::cout << "--- No such level. ---" << std::endl;
		return ;
	}
	while (i <= 3)
	{
		(this->*p_func[i])();
		return ;
	}
}