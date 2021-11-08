/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel <daniel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 20:11:26 by daniel            #+#    #+#             */
/*   Updated: 2021/10/14 22:23:05 by daniel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

#include <iostream>

class Karen
{
	typedef void (Karen::*array_of_functions) ();
	public:
		Karen( void );
		~Karen( void );
		void complain( std::string level );
		int	getlevel ( std::string level );

	private:
		void _debug( void );
		void _info( void );
		void _warning( void );
		void _error( void );
		std::string _levels[4];	
		array_of_functions _myfunctions[4];
};

#endif