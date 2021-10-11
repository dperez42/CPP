#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

// LIBS
# include <iostream>

// PROTOTYPES
class Contact;

// CLASS DEFINITIONS
class Contact
{
    public:
        Contact();
        ~Contact();
        Contact &operator=(const Contact& op);
        //Set

        //Get

        // Additionnal
        void    add_contact();
        void    print_contact();
        void    print_names();
        bool    empty();

        // Exceptions
    
    private:
        std::string _first_name;
        std::string _last_name;
        std::string _nickname;
        std::string _phone_number;
        std::string _darkest_secret;
        bool        _is_empty;
        void        _ft_format(std::string s);

};
#endif