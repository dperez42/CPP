# include <iostream>
# include "Phonebook_class.hpp"

//Class Phonebook;

Phonebook::Phonebook( void ){}
Phonebook::~Phonebook(){}

void Phonebook::show_all(void)
{
    std::cout << "     index|first name| last name|  nickname" << std::endl;
    std::cout << "-------------------------------------------" << std::endl;
    int j = 0;
    while (j < NB_CONTACTS)
    {
        std::cout << "         " << j << "|";
        _list[j].print_names();
        j++;
    }
}

int     Phonebook::ft_add( void )
{
    int j = 0;
    while (!_list[j].empty() && j < NB_CONTACTS)
        j++;
    if( j > (NB_CONTACTS - 1)) 
        j =  (NB_CONTACTS -1);
    _list[j].add_contact();
    return (0);
}

std::string Phonebook::_ft_print_by_index(Contact list[8], int contact_amount)
{
    std::string entry;
    std::cout << "Choose an index between 0 to " << contact_amount - 1 << " : ";
    std::getline(std::cin, entry);
    if (!entry.compare(""))
        return ("NONE");
    if (entry.length() != 1)
        return (entry);
    int index = atoi(entry.c_str());
    if (entry[0] < 48 || entry[0] > 56 || list[index].empty())
        return (entry);
    list[index].print_contact();
    return ("NONE");
}

int     Phonebook::ft_search(void)
{
    std::cout << "     index|first name| last name|  nickname" << std::endl;
    std::cout << "-------------------------------------------" << std::endl;
    int j = 0;
    while (!_list[j].empty() && j < NB_CONTACTS)
    {
        std::cout << "         " << j << "|";
        _list[j].print_names();
        j++;
    }
    if (j > 0) 
    {
        while (1){
            std::string entry;
            entry = _ft_print_by_index(_list, j);
            if (entry.compare("NONE"))
                std::cout << "Index: " << entry << " not exist. Try another or press \"ENTER\" to exit." << std::endl;
            else {
                return(0);
            }
        }
    }
    return (0);
}



