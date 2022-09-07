#include "Zombie.hpp"

int main(void)
{
	Zombie *z;
	int N = 10;

	z =  zombieHorde(N, "z_Heap");
	std::cout << "\n";
	std::cout << "Start anounce:" << std::endl;
	for (int i = 0; i < N; i++)
		z[i].announce();
	std::cout << "\n";
	std::cout << "Start del:" << std::endl;
	delete [] z;
}