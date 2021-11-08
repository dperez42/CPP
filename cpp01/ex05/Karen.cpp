/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-z <dperez-z@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 20:12:58 by daniel            #+#    #+#             */
/*   Updated: 2021/10/19 17:48:15 by dperez-z         ###   ########.fr       */
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

	_myfunctions[0] = &Karen::debug;
	_myfunctions[1] = &Karen::info;
	_myfunctions[2] = &Karen::warning;
	_myfunctions[3] = &Karen::error;
	return;
}
//Destructor
Karen::~Karen( void )
{
    return;
}
//Private Functions
void    Karen::debug( void )
{
    std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void    Karen::info( void )
{
    std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void    Karen::warning( void )
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void    Karen::error( void )
{
    std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

//PublicFunctions
void    Karen::complain( std::string level )
{
	int i;
	i = 0;
	while (i < 4)
	{
		if(level == _levels[i])
			(this->*_myfunctions[i])();
		i++;
	}
}