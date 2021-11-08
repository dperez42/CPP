/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-z <dperez-z@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 20:14:36 by daniel            #+#    #+#             */
/*   Updated: 2021/10/14 16:44:08 by dperez-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(int argc, char *argv[])
{
	Zombie *horde;
	std::string name_of_horde;
	int N;
    int i;

    i = 0;
    if (argc != 3)
    {
        std::cout << "Usage: ---- ./Zombie number name -------" << std::endl;
        return 1;
    }
    N = std::atoi(argv[1]);
	name_of_horde = argv[2];
	horde = zombieHorde(N, name_of_horde);
	while (i < N)
    {
		horde[i].announce();
        i++;
    }
    i = 0;    
    while (i < 10)
    {
        std::cout << i << "--Doing something --" << std::endl;
        i++;
    }
    delete [] horde;
	system("leaks Zombie");
	return 0;
}