/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-z <dperez-z@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 12:29:49 by dperez-z          #+#    #+#             */
/*   Updated: 2021/12/10 12:29:50 by dperez-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (std::size_t i=0;i < _nbMaxMaterias;i++)
		_tabMaterias[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const & src)
{
	for (std::size_t i=0;i < _nbMaxMaterias;i++)
		if (src._tabMaterias[i])
			_tabMaterias[i] = src._tabMaterias[i]->clone();
		else
			_tabMaterias[i] = NULL;
}

MateriaSource::~MateriaSource()
{
	for (std::size_t i=0;i < _nbMaxMaterias;i++)
		if (_tabMaterias[i])
			delete _tabMaterias[i];
}

MateriaSource & MateriaSource::operator=(MateriaSource const & src)
{
	if (this == &src)
		return *this;
	for (std::size_t i=0;i < _nbMaxMaterias;i++)
	{
		if (_tabMaterias[i])
			delete _tabMaterias[i];
		if (src._tabMaterias[i])
			_tabMaterias[i] = src._tabMaterias[i]->clone();
		else
			_tabMaterias[i] = NULL;
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria* element)
{
	for (std::size_t i=0;i < _nbMaxMaterias;i++)
		if (!_tabMaterias[i])
		{
			_tabMaterias[i] = element;
			break;
		}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (std::size_t i=0;i < _nbMaxMaterias;i++)
		if (_tabMaterias[i] && _tabMaterias[i]->getType() == type)
			return (_tabMaterias[i]->clone());
	return (NULL);
}
