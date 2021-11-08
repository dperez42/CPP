/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-z <dperez-z@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 19:59:30 by daniel            #+#    #+#             */
/*   Updated: 2021/10/19 17:50:53 by dperez-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main(void){
	Karen	Karen;

	std::cout << "Toma Karen Toma !" << std::endl;
	std::cout << std::endl;
	Karen.complain("DEBUG");
	std::cout << std::endl;
	Karen.complain("INFO");
	std::cout << std::endl;
	Karen.complain("WARNING");
	std::cout << std::endl;
	Karen.complain("ERROR");
}
