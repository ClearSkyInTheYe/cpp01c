#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie* z;
	std::stringstream s;
	std::string 		a;

	z = new Zombie[N];
	(void) name;
	for (int i = 0; i < N; i++)
	{
		s.str(std::string());
		s << i;
		a = s.str();
		z[i].set_zname(name +  " " + a);
	}
	return z;
}