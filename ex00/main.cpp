/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juestrel <juestrel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 23:07:58 by juestrel          #+#    #+#             */
/*   Updated: 2024/07/29 23:30:09 by juestrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main (void)
{
	Zombie *zombie = newZombie("Paco");
	zombie->announce();
	randomChump("Joaquín");
	delete (zombie);
	return (0);
}