#include <iostream>
#include "Weapon.hpp"

class HumanB{
	std::string _name;
	Weapon		*_w;
public:
	~HumanB();
	HumanB(std::string name);
	void attack();
	void setWeapon(Weapon *w);
};