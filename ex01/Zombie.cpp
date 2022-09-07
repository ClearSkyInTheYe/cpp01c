#include "Zombie.hpp"

Zombie::Zombie(): _name("z_name")
{
	static int  i;
	std::cout << "zombie" << i << this->_name <<" created" << std::endl;
	i++;
}

Zombie::~Zombie()
{
	std::cout << "DESTRUCTOR: " << this->_name << " deleted.\n";
}

void	Zombie::announce() const
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ...\n";
}

void	Zombie::set_zname(std::string name)
{
	this->_name = name;
}
