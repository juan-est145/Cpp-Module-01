/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juestrel <juestrel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 16:10:53 by juestrel          #+#    #+#             */
/*   Updated: 2024/08/02 16:50:45 by juestrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::_debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}
void Harl::_info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You did not put enough bacon in my burger! If you did, I would not be asking for more!" << std::endl;
}

void Harl::_warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I have been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::_error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

Harl::Harl(void) 
{
	std::cout << "Oh fuck, Harl is back" << std::endl;
	this->_methods[0] = &Harl::_debug;
	this->_methods[1] = &Harl::_info;
	this->_methods[2] = &Harl::_warning;
	this->_methods[3] = &Harl::_error;

	this->_levels[0] = "DEBUG";
	this->_levels[1] = "INFO";
	this->_levels[2] = "WARNING";
	this->_levels[3] = "ERROR";
}

Harl::~Harl(void) 
{
	std::cout << "Harl has been shuted up for good" << std::endl;
}

void Harl::complain(std::string level)
{
	unsigned int size = (unsigned int)(sizeof(this->_levels) / sizeof(this->_levels[0]));

	for (unsigned int i = 0; i < level.length(); i++)
		level[i] = toupper(level[i]);
	for (unsigned int i = 0; i < size; i++)
	{
		if (this->_levels[i] == level)
		{
			(this->*_methods[i])();
			return ;
		}
	}
	std::cout << "That string level does not have any method associated" << std::endl;
}
