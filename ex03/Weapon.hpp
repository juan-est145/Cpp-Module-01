#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon
{
private:
	std::string _type;

public:
	Weapon(void);
	Weapon(std::string weaponType);
	~Weapon(void);
	const std::string &getType() const;
	void setType(std::string type);
};
#endif