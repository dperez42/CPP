/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-z <dperez-z@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 20:15:34 by daniel            #+#    #+#             */
/*   Updated: 2021/10/14 16:33:39 by dperez-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>      

Zombie *newZombie(std::string name);
void	randomChump(std::string name);

int main(int argc, char **argv)
{
    int i;
    Zombie *zombie1;
    Zombie *zombie2;
    Zombie *zombie3;

    if (argc != 4)
    {
        std::cout << "Usage: ---- ./Zombie name1 name2 name3 ------- only 3 names" << std::endl;
        return 1;
    }

    std::cout << "Creating Zombies manually. Allocation in Stack." << std::endl;
    Zombie zzombie1(argv[1]);
    zzombie1.announce();
    Zombie zzombie2(argv[2]);
    zzombie2.announce();
    Zombie zzombie3(argv[3]);
    zzombie3.announce();
    
    std::cout << "Creating Zombies using randomChump()  function. Allocation in Stack." << std::endl;
    i = 0;    
    while (i < argc - 1)
    {
        randomChump(argv[i + 1]);
        i++;
    }
    std::cout << std::endl;
    std::cout << "Creating Zombies using newZombie() function. Allocation in Heap. " << std::endl;
    zombie1 = newZombie(argv[1]);
    zombie1->announce();
    zombie2 = newZombie(argv[2]);
    zombie2->announce();
    zombie3 = newZombie(argv[3]);
    zombie3->announce();
    i = 0;    
    while (i < 10)
    {
        std::cout << i << "--Doing something --" << std::endl;
        i++;
    }
    std::cout << "\nDeleting Zombies created by newZombie() Now." << std::endl;
    delete zombie1;
    delete zombie2;
    delete zombie3;

    std::cout << std::endl;
    system("leaks Zombie");
    
    std::cout << "\nDeleting Zombies created manually Now." << std::endl;
    return  0;
}