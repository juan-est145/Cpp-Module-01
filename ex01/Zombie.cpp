/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juestrel <juestrel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 23:08:16 by juestrel          #+#    #+#             */
/*   Updated: 2024/07/30 00:11:28 by juestrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::~Zombie(void)
{
	std::cout << "Zombie " << this->_name << " has been destroyed" << std::endl;
}
void Zombie::setName(std::string name)
{
	this->_name = name;
}


void Zombie::announce(void)
{
	std::cout << this->_name <<":  BraiiiiiiinnnzzzZ..." << std::endl;
}
