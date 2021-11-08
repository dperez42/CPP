/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-z <dperez-z@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 20:11:18 by daniel            #+#    #+#             */
/*   Updated: 2021/10/19 17:56:46 by dperez-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main(int argc, char **argv)
{
	Karen	Karen;
	std::string info;

	if (argc != 2)
	{
		std::cout << "Error, invalid parameters !" << std::endl;
		return (1);
	}
	info = argv[1];
	switch (Karen.getlevel(info))
	{
		case 0 : 
				Karen.complain("DEBUG");
				break;
		case 1 : 
				Karen.complain("INFO");
				break;
		case 2 : 
				Karen.complain("WARNING");
				break;
		case 3 : 
				Karen.complain("ERROR");
				break;
		default : std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
	
	return 0;
}