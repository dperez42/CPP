/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-z <dperez-z@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 12:29:22 by dperez-z          #+#    #+#             */
/*   Updated: 2021/12/10 12:29:23 by dperez-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include <string>
# include "ICharacter.hpp"
# include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		Cure(Cure const & src);
		virtual ~Cure();
		Cure & operator=(Cure const & src);
		virtual Cure* clone(void) const;
		virtual void use(ICharacter& target);
};

#endif
