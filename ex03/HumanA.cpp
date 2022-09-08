#include "HumanA.hpp"

HumanA::~HumanA() {}

HumanA::HumanA (std::string name,  Weapon &w) : _name(name), _w(w) {}

void HumanA::attack() {
	std::cout << this->_name << " attacks with their " << this->_w.getType() << std::endl;
}