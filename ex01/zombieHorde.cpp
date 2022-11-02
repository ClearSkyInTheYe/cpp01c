#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie* z;
	std::stringstream s;

	z = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		s.str(std::string());
		s << i;
		z[i].set_zname(name +  " " + s.str());
	}
	return z;
}