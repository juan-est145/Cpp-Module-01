/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juestrel <juestrel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 12:22:26 by juestrel          #+#    #+#             */
/*   Updated: 2024/07/31 12:42:57 by juestrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() {}

Weapon::Weapon(std::string weaponType)
{
	this->_type = weaponType;
}

Weapon::~Weapon() {}

const std::string &Weapon::getType() const
{
	return (_type);
}

void Weapon::setType(std::string type)
{
	this->_type = type;
}