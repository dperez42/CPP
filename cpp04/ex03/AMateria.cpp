/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-z <dperez-z@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 12:28:40 by dperez-z          #+#    #+#             */
/*   Updated: 2021/12/10 12:28:41 by dperez-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	this->type = "Unnamed";
    std::cout << "\033[0m" << "🧱 Default \033[1;31mMateria \033[0mConstructor called name: " << this->type << std::endl;
    return ;
}

AMateria::AMateria(std::string const & type)
{
	this->type = type;
    std::cout << "\033[0m" << "🧱 Init \033[1;31mMateria \033[0mConstructor called name: \033[0m" << this->type << std::endl;
    return ;
}

AMateria::AMateria(AMateria const &instance)
{
	std::cout << "\033[0m" << "🧱 Copy \033[1;31mMateria \033[0mConstructor called \033[0m" << std::endl;
    *this = instance;
    return ;
}

AMateria::~AMateria()
{
	std::cout << "\033[0m" << "🧱 Destructor \033[1;31mMateria \033[0mcalled name: " << this->type << std::endl;
    return ;
}

AMateria & AMateria::operator=(AMateria const & instance)
{
	std::cout << "\033[0m" << "🧱 Assignation \033[1;31mMateria\033[0m Operator called" << std::endl;
	if (this == &instance)
		return *this;
	this->type = instance.getType();
	return (*this);
}

std::string const & AMateria::getType(void) const
{
	return (this->type);
}

void AMateria::use(ICharacter& target)
{
	(void)target;
}
