/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juestrel <juestrel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 12:58:35 by juestrel          #+#    #+#             */
/*   Updated: 2024/07/30 13:04:25 by juestrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main (void)
{
	std::string brain = "HI THIS IS BRAIN";
	std::string *stringPTR = &brain;
	std::string &stringREF = brain;

	std::cout << &brain << '\n';
	std::cout << stringPTR << '\n';
	std::cout << &stringREF << std::endl;

	std::cout << '\n';

	std::cout << brain << '\n';
	std::cout << *stringPTR << '\n';
	std::cout << stringREF << std::endl;
	return (0);
}