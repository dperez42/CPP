#ifndef PHONEBOOK_CLASS_HPP
#define PHONEBOOK_CLASS_HPP

#define NB_CONTACTS 3
// LIBS
# include <iostream>
# include "Contact_class.hpp"
// PROTOTYPES

// CLASS DEFINITIONS
class Phonebook {
public:

    Phonebook( void );
    ~Phonebook( void );
    //Set
    //Get
    // Additionnal
    void        show_all(void);
    int         ft_add(void);
    int         ft_search(void);

private:
    Contact _list[NB_CONTACTS];
    std::string _ft_print_by_index(Contact list[8], int contact_amount);
};
#endif
