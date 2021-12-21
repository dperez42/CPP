/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-z <dperez-z@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 12:29:25 by dperez-z          #+#    #+#             */
/*   Updated: 2021/12/10 12:29:26 by dperez-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
}

Ice::Ice(Ice const & src) : AMateria(src)
{
}

Ice::~Ice()
{
}

Ice & Ice::operator=(Ice const & src)
{
	return ((Ice &)this->AMateria::operator=(src));
}

Ice* Ice::clone(void) const
{
	return (new Ice(*this));
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	this->AMateria::use(target);
}
