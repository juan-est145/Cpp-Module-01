/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juestrel <juestrel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 16:08:21 by juestrel          #+#    #+#             */
/*   Updated: 2024/07/31 17:36:07 by juestrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NotSed.hpp"

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cout << "Error, there must be only three arguments" << std::endl;
		return (1);
	}
	try
	{
		NotSed sed(argv[2], argv[3]);
		sed.prepareFiles(argv[1]);
		sed.replace();
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		return (1);
	}
	return (0);
}