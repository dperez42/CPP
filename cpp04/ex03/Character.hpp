/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-z <dperez-z@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 12:29:05 by dperez-z          #+#    #+#             */
/*   Updated: 2021/12/10 12:29:13 by dperez-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <string>
# include "ICharacter.hpp"
# include "AMateria.hpp"
# include <iostream>

class Character : public ICharacter
{
	protected:
		AMateria * _misMaterias[4];
		std::string _name;
		void _eraseMaterias(void);
	public:
		//constructor
		Character(void);
		Character(std::string const & name);
		Character(Character const & instance);
		//Destructor
		virtual ~Character();
		//operator 
		Character & operator= (Character const & instance);
		//Functions
		void setName(std::string name);
		virtual std::string const & getName() const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);
};

#endif
