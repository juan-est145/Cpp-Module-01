/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NotSed.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juestrel <juestrel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 16:40:23 by juestrel          #+#    #+#             */
/*   Updated: 2024/07/31 17:40:49 by juestrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NotSed.hpp"

NotSed::NotSed(char *replace, char *replacement)
{
	this->_replace = replace;
	this->_replacement = replacement;
}

NotSed::~NotSed()
{
	if (this->_infile.is_open())
		this->_infile.close();
	if (this->_outfile.is_open())
		this->_outfile.close();
}

void NotSed::prepareFiles(char *toOpen)
{
	this->_infile.open(toOpen, std::ios::in);
	if (!this->_infile.is_open())
		throw(std::runtime_error("Could not open file, check that it exits and you have permissions to open\n"));
	this->_outfile.open((std::string(toOpen) + ".replace").c_str(), std::ios::out);
	if (!this->_outfile.is_open())
		throw(std::runtime_error("Could not create file\n"));
	getline(this->_infile, this->_content, '\0');
}

void NotSed::replace(void)
{
	if (!this->_infile.is_open() || !this->_outfile.is_open() || this->_replace == NULL || this->_replacement == NULL)
		throw(std::runtime_error("Something went wrong, cannot perform operation"));

	size_t index = 0;
	while (index = this->_content.find(this->_replace, index), index != std::string::npos)
	{
		this->_content.erase(index, strlen(this->_replace));
		this->_content.insert(index, this->_replacement);
		index += strlen(this->_replacement);
	}
	this->_outfile << this->_content;
}
