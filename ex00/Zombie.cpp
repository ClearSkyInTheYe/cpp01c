#include "Zombie.hpp"

Zombie::Zombie(std:: string name): _name(name) {}

Zombie::~Zombie()
{
	std::cout << "DESTRUCTOR: " << this->_name << " deleted.\n";
}

void	Zombie::announce() const
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ...\n";
}