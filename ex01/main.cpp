//clang++  -Wall -Wextra -Werror clang++  -Wall -Wextra -Werror main.cpp Contact_class.cpp Phonebook_class.cpp 
#include <iostream>     
#include <iomanip>      
#include "Phonebook_class.hpp"

int main()
{
    std::string entry;
    Phonebook mybook;

    std::cout << "Welcome to your phonebook !\nThe available commands are : " << std::endl;
	std::cout << " - ADD \n - SEARCH \n - EXIT \n" << std::endl;
    while (1)
    {
        std::cout << "Command? > ";
        std::getline(std::cin, entry);
        if (!entry.compare("ADD")){
            std::cout << "your command: " <<  entry << std::endl;
            mybook.ft_add();
            //mybook.show_all();
        }
        else if (!entry.compare("SEARCH")){
            std::cout << "your command: " <<  entry << std::endl;
            mybook.ft_search();
        }
        else if (!entry.compare("EXIT")){
            std::cout << "your command: " <<  entry << std::endl;
            break;   
        }
        else {
            std::cout << (int) entry[0] << (int) entry[1] << std::endl;
            std::cout << "Not valid command: " <<  entry << ", use: ADD, SEARCH or EXIT." << std::endl;
        }
    }
    system("leaks phonebook");
    return (0);
}