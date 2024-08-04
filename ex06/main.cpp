/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juestrel <juestrel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 16:10:50 by juestrel          #+#    #+#             */
/*   Updated: 2024/08/04 14:09:42 by juestrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char *argv[])
{
	Harl harl;
	unsigned int index = 0;
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	if (argc != 2)
	{
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		return (1);
	}
	std::string argument = argv[1];
	for (unsigned int i = 0; i < argument.length(); i++)
		toupper(argument[i]);
	index = (unsigned int)levels->find(argument);
	for (; index < levels->length(); index++)
	{
		switch (index)
		{
		case 0:
			harl.complain("DEBUG");
			break;
		case 1:
			harl.complain("INFO");
			break;
		case 2:
			harl.complain("WARNING");
			break;
		case 3:
			harl.complain("ERROR");
			break;
		default:
			break;
		}
	}
	return (0);
}