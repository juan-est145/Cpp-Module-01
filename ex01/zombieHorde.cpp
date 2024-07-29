/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juestrel <juestrel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 23:39:30 by juestrel          #+#    #+#             */
/*   Updated: 2024/07/30 00:23:04 by juestrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
	Zombie *zombieArray = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		zombieArray[i].setName(name);
		zombieArray[i].announce();
	}
	return (zombieArray);
}
