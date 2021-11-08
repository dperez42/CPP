/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-z <dperez-z@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 20:12:54 by daniel            #+#    #+#             */
/*   Updated: 2021/10/19 17:47:55 by dperez-z         ###   ########.fr       */
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

    private:
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
		std::string _levels[4];	
		array_of_functions _myfunctions[4];
		
};

#endif