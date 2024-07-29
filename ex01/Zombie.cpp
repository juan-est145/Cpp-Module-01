/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juestrel <juestrel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 23:08:16 by juestrel          #+#    #+#             */
/*   Updated: 2024/07/29 23:38:06 by juestrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->_name = name;
}

Zombie::~Zombie(void)
{
	std::cout << "Zombie " << this->_name << " has been destroyed" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << this->_name <<":  BraiiiiiiinnnzzzZ..." << std::endl;
}
