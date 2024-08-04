/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juestrel <juestrel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 16:10:50 by juestrel          #+#    #+#             */
/*   Updated: 2024/08/04 14:59:54 by juestrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

std::string getString(char *argv)
{
	std::string argument = argv;
	for (unsigned int i = 0; i < argument.length(); i++)
		argument[i] = toupper(argument[i]);
	return (argument);
}

size_t findIndex(const char *string, std::string (&array)[4])
{
	for (size_t i = 0; i < 4; i++)
	{
		if (string == array[i])
			return (i);
	}
	return (std::string::npos);
}

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		exit(1);
	}

	Harl harl;
	size_t index;
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	std::string argument = getString(argv[1]);

	if (index = findIndex(argument.c_str(), levels), index == std::string::npos)
	{
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		exit(1);
	}
	for (; index < levels->length(); index++)
	{
		switch (index)
		{
		case 0:
			std::cout << "[ DEBUG ]\n";
			harl.complain("DEBUG");
			std::cout << std::endl;
			break;
		case 1:
			std::cout << "[ INFO ]\n";
			harl.complain("INFO");
			std::cout << std::endl;
			break;
		case 2:
			std::cout << "[ WARNING ]\n";
			harl.complain("WARNING");
			std::cout << std::endl;
			break;
		case 3:
			std::cout << "[ ERROR ]\n";
			harl.complain("ERROR");
			std::cout << std::endl;
			break;
		default:
			break;
		}
	}
	return (0);
}