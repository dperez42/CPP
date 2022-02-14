/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-z <dperez-z@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 16:20:27 by dperez-z          #+#    #+#             */
/*   Updated: 2022/01/20 19:37:54 by dperez-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stack>
#include <iostream>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack(void) : std::stack<T>(){};
		MutantStack(const MutantStack &copy) : std::stack<T>(copy){};
		virtual ~MutantStack(void){};
		MutantStack	&operator=(const MutantStack &op)
		{
			if (this == &op)
				return *this;
			std::stack<T>::operator=(op);
			return *this;
		}

		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;

		iterator	begin(void){return std::stack<T>::c.begin();};
		iterator	end(void) {return std::stack<T>::c.end();};

		const_iterator	begin(void) const {return std::stack<T>::c.begin();};
		const_iterator	end(void) const {return std::stack<T>::c.end();};
};