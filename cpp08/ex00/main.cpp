/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-z <dperez-z@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 16:19:58 by dperez-z          #+#    #+#             */
/*   Updated: 2022/01/20 19:48:20 by dperez-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <iostream>
#include "easyfind.hpp"

int	main(void)
{
	std::vector<int>	v;
	
	for (int i = 0; i < 5; i++)
		v.push_back(i * 2);
    
    if (std::find(v.begin(), v.end(), 6) != std::end(v)){
        std::cout << "found a 6 in vector v!\n";
    } else {
        std::cout << "not found a 6 in vector v!\n";
    }; 
	
    if (std::find(v.begin(), v.end(), 7) != std::end(v)){
        std::cout << "found a 7 in vector v!\n";
    } else {
        std::cout << "not found a 7 in vector v!\n";
    }; 



	try
	{
		easyfind(v, 6);
		easyfind(v, 7);
	}
	catch (int)
	{
		std::cout << "The number couldn't be found" << std::endl;
	}

	return 0;
} 