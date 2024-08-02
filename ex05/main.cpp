/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juestrel <juestrel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 16:10:50 by juestrel          #+#    #+#             */
/*   Updated: 2024/08/02 16:52:24 by juestrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
	Harl harl;

	harl.complain("DEBUG");
	harl.complain("Debug");
	harl.complain("debug");

	harl.complain("INFO");
	harl.complain("Info");
	harl.complain("info");

	harl.complain("WARNING");
	harl.complain("Warning");
	harl.complain("warning");

	harl.complain("ERROR");
	harl.complain("Error");
	harl.complain("error");

	harl.complain("Hope he stops complaining soon");
	return (0);
}