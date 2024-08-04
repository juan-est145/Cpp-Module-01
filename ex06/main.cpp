/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juestrel <juestrel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 16:10:50 by juestrel          #+#    #+#             */
/*   Updated: 2024/08/04 13:53:21 by juestrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char *argv[])
{
	Harl harl;
	unsigned int index = 0;
	
	if (argc != 2)
	{
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		return (1);
	}
	std::string argument = argv[1];
	for (unsigned int i = 0; i < argument.length(); i++)
		toupper(argument[i]);
	switch (expression)
	{
	case /* constant-expression */:
		/* code */
		break;
	
	default:
		break;
	}
	return (0);
}