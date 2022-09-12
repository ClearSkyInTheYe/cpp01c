#include "Harl.hpp"

int main(int ac, char **argv)
{
	Harl harl;

	if (ac < 2)
	{
		std::cout << "Error: not arguments" << std::endl;
		return (1);
	}
	if (ac > 2)
	{
		std::cout << "Error: to many arguments" << std::endl;
		return (1);
	}
	harl.complain(argv[1]);
}