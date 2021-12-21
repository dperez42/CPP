/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-z <dperez-z@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 12:29:53 by dperez-z          #+#    #+#             */
/*   Updated: 2021/12/10 12:29:54 by dperez-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <string>
# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
	protected:
		static std::size_t const _nbMaxMaterias = 4;
		AMateria*	_tabMaterias[_nbMaxMaterias];
	public:
		MateriaSource();
		MateriaSource(MateriaSource const & src);
		virtual ~MateriaSource();
		virtual MateriaSource & operator=(MateriaSource const & src);
		virtual void learnMateria(AMateria* element);
		virtual AMateria* createMateria(std::string const & type);
};

#endif
