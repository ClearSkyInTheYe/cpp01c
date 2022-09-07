#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <sstream>

class Zombie{

	std::string _name;

public:
	Zombie();
	~Zombie();

	void	announce() const;
	void	set_zname(std::string name);

};

Zombie* zombieHorde(int N, std::string name);

#endif