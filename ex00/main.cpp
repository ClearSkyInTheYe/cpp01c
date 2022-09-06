#include "Zombie.hpp"

int main()
{
	Zombie *z;

	z = newZombie("Heap");
	z->announce();
	randomChump("Stack");
	delete z;
}