/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-z <dperez-z@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 12:29:18 by dperez-z          #+#    #+#             */
/*   Updated: 2021/12/10 12:29:19 by dperez-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	std::cout << "\033[0m" << "🏥 Default \033[1;32mCure \033[0m Constructor called name: " << this->type << std::endl;
}

Cure::Cure(Cure const & src) : AMateria(src)
{
	std::cout << "\033[0m" << "🏥 Init \033[1;32mCure \033[0m Constructor called name: " << this->type << std::endl;
}

Cure::~Cure()
{
	std::cout << "\033[0m" << "🏥 Destructor \033[1;32mCure \033[0mcalled name: " << this->type << std::endl;
}

Cure & Cure::operator=(Cure const & src)
{
	std::cout << "\033[0m" << "🏥Assignation \033[1;32mCure \033[0mOperator called " << std::endl;
	return ((Cure &)this->AMateria::operator=(src));
}

Cure* Cure::clone(void) const
{
	return (new Cure(*this));
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
	this->AMateria::use(target);
}
