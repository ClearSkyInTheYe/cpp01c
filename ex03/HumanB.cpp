#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name) {}

HumanB::~HumanB() {}

void HumanB::attack() {
	std::string type = "hands";

	if (this->_w)
		type = this->_w->getType();

	std::cout << this->_name << " attacks with their " << type << std::endl;
}

void  HumanB::setWeapon(Weapon * w){
	this->_w = w;
}