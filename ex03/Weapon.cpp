#include "Weapon.hpp"

Weapon::Weapon(std::string type) :_type(type) {}

Weapon::~Weapon() {
	return ;
}

std::string &Weapon::getType() {  //&weapon?
	return _type;
}

void Weapon::setType(std::string type) {
	_type = type;
}