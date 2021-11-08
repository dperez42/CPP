/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel <daniel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 20:11:29 by daniel            #+#    #+#             */
/*   Updated: 2021/10/14 22:24:37 by daniel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
#include <iostream>

//Constructor
Karen::Karen( void )
{
	_levels[0] = "DEBUG";
	_levels[1] = "INFO";
	_levels[2] = "WARNING";
	_levels[3] = "ERROR";

	_myfunctions[0] = &Karen::_debug;
	_myfunctions[1] = &Karen::_info;
	_myfunctions[2] = &Karen::_warning;
	_myfunctions[3] = &Karen::_error;

	return;
}

//Destructor
Karen::~Karen( void ){ return;}

//Private functions
void    Karen::_debug( void )
{  std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger.\nI just love it!" << std::endl;}

void    Karen::_info( void )
{  std::cout << "I cannot believe adding extra bacon cost more money.\nYou don’t put enough! If you did I would not have to ask for it!" << std::endl;}

void    Karen::_warning( void )
{  std::cout << "I think I deserve to have some extra bacon for free.\nI’ve been coming here for years and you just started working here last month." << std::endl;}

void    Karen::_error( void )
{  std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;}

//Public functions
int    Karen::getlevel( std::string level )
{
	int i;
	i = 0;
	while (i < 4)
	{
		if(level == _levels[i])
			return (i);
		i++;
	}
	return (-1);
}

void    Karen::complain( std::string level )
{
	int i;
	i = this->getlevel(level);
	while (i < 4)
	{
		std::cout << "[" << _levels[i] << "]" << std::endl;
		(this->*_myfunctions[this->getlevel(_levels[i])])();
		std::cout << std::endl;
		i++;
	}
}