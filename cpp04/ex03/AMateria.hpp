/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-z <dperez-z@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 12:28:45 by dperez-z          #+#    #+#             */
/*   Updated: 2021/12/10 12:28:46 by dperez-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	protected:
		std::string type;
	public:
		//constructor
		AMateria(void);
		AMateria(std::string const & type);
		AMateria(AMateria const & instance);
		//Destructor
		virtual ~AMateria();
		//Operator
		AMateria & operator=(AMateria const & instance);
		//Functions
		std::string const & getType(void) const; //Returns the materia type
		virtual AMateria* clone(void) const = 0; //Returns a new instance of Materia
		virtual void use(ICharacter& target);    //Will display message of Ice or Cure with the Name of the Character
};

#endif
