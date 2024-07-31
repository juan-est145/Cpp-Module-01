#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include <string>
// #include <cstddef>
#include "Weapon.hpp"

class HumanB
{
private:
	std::string _name;
	Weapon *_weapon = NULL;

public:
	HumanB(std::string name);
	~HumanB(void);
	void setWeapon(std::string weaponName);
	void attack(void);
};
#endif