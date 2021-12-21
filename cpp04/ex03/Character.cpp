/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-z <dperez-z@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 12:28:50 by dperez-z          #+#    #+#             */
/*   Updated: 2021/12/10 12:28:51 by dperez-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "Character.hpp"

void Character::_eraseMaterias(void)
{
	for (std::size_t i=0;i < 4;i++)
		if (_misMaterias[i])
			delete _misMaterias[i];
}

Character::Character()
{   
    std::cout << "\033[0m" << "🧔 Default \033[1;32mCharacter \033[0m Constructor called name: " << this->_name << std::endl;
	this->_name = "Unnamed";
    for (std::size_t i=0;i < 4;i++)
		_misMaterias[i] = NULL;
	return ;
}

Character::Character(std::string const & name)
{
	std::cout << "\033[0m" << "🧔 Default \033[1;32mCharacter \033[0m Constructor called name: " << this->_name << std::endl;
	this->_name = name;
	for (std::size_t i=0;i < 4;i++)
		_misMaterias[i] = NULL;
	return;
}

Character::Character(Character const & instance)
{
	std::cout << "\033[0m" << "🧔 Copy \033[1;32mCharacter \033[0m Constructor called " << std::endl;
	this -> _name = instance._name;
	for (std::size_t i=0;i < 4;i++)
	{
		if (instance._misMaterias[i])
			_misMaterias[i] = instance._misMaterias[i]->clone();
		else
			_misMaterias[i] = NULL;
	}
}

Character::~Character()
{
	std::cout << "\033[0m" << "🧔 Destructor \033[1;32mCharacter \033[0mcalled name: " << this->_name << std::endl;
	_eraseMaterias();
}

Character & Character::operator= (Character const & src)
{
	if (this == &src)
		return *this;
	_eraseMaterias();
	for (std::size_t i=0;i < 4;i++)
	{
		if (src._misMaterias[i])
			_misMaterias[i] = src._misMaterias[i]->clone();
		else
			_misMaterias[i] = NULL;
	}
	_name = src._name;
	return (*this);
}

std::string const & Character::getName() const
{
	return (_name);
}

void Character::setName(std::string name)
{
	this->_name = name;
	return;
}

void Character::equip(AMateria* m)
{
	if (!m)
		return ;
	int pos = 4;
	for (std::size_t i = 0;i < 4;i++)
	{
		if (_misMaterias[i])
		{
			if (_misMaterias[i] == m)
				return ;
		}
		else
		{
			if (pos >= 4)
				pos = i;
		}
	}
	if (pos < 4)
		_misMaterias[pos] = m;
}

void Character::unequip(int idx)
{
	if (idx < 0)
		return;
	int tmp = idx;
	if (tmp >= 0 && tmp < 4)
		_misMaterias[tmp] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0)
		return;
	int tmp = idx;
	if (tmp < 4 && _misMaterias[tmp])
		_misMaterias[tmp]->use(target);
}

