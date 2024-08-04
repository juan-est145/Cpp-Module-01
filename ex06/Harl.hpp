#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>
#include <cstdlib>

class Harl
{
private:
	void _debug(void);
	void _info(void);
	void _warning(void);
	void _error(void);
	void (Harl::*_methods[4])(void);
	std::string _levels[4];

public:
	Harl(void);
	~Harl(void);
	void complain(std::string level);
};
#endif