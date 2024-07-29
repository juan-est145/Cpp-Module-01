/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juestrel <juestrel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 23:07:58 by juestrel          #+#    #+#             */
/*   Updated: 2024/07/30 00:22:52 by juestrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	int hordeSize = 5;
	Zombie *zombieArray = zombieHorde(hordeSize, "Pepe");
	delete[] zombieArray;
	return (0);
}