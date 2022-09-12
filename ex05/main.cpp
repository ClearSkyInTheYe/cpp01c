#include "Harl.hpp"

int main()
{
	Harl harl;

	harl.complain("INFO");
	harl.complain("DEBUG");
	harl.complain("WARNING");
	harl.complain("ERROR");

	std::cout << std::endl <<"wrong:" << std::endl;
	harl.complain("INF");
	harl.complain("EBUG");
	harl.complain("WARING");
	harl.complain("ERRR");
	harl.complain("");
}