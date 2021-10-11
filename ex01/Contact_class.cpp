#include <iomanip> 
#include "Contact_class.hpp"

// Constructor.
Contact::Contact():	_is_empty(true) {}

// Destructor:
Contact::~Contact() {}

// SET=============================================================

// GET=============================================================

// FUNCTIONS =============================================================================
void	Contact::add_contact()
{
	std::string infos_name[11] = {
		"first name",
		"last name",
		"nickname",
		"phone number",
		"darkest secret"
	};
	std::string entry;
	for (int i = 0; i < 5; i++)
	{
		std::cout << infos_name[i] << " : ";
		std::getline(std::cin, entry);
		if (i == 0) 
			this->_first_name = entry;
		if (i == 1) 
			this->_last_name = entry;
		if (i == 2) 
			this->_nickname = entry;
		if (i == 3) 
			this->_phone_number = entry;
		if (i == 4) 
			this->_darkest_secret = entry;
	}
	this->_is_empty = false;
}

void	Contact::print_names(){
	    Contact::_ft_format(this->_first_name);
        std::cout << "|";
        Contact::_ft_format(this->_last_name);
        std::cout << "|";
        Contact::_ft_format(this->_nickname);
        std::cout << std::endl;
}

void	Contact::print_contact()
{
	std::cout << "first name      : " << this->_first_name << std::endl;
	std::cout << "last name       : " << this->_last_name << std::endl;
	std::cout << "nickname        : " << this->_nickname << std::endl;
	std::cout << "phone number    : " << this->_phone_number << std::endl;
	std::cout << "darkest secret  : " << this->_darkest_secret << std::endl;
}

bool	Contact::empty()
{ return (this->_is_empty); }

void 	Contact::_ft_format(std::string s)
{
	
	std::replace( s.begin(), s.end(), '	', ' ');
	int i = 0;
	int c = 0;
	unsigned int cont = 0;
	while (s[i] != 0)
	{
		if (s[i] < 0){
			cont ++;
		}
		i++;
		if ((i - cont + cont/2) > 10)
		{
			c = 1;
			break;
		}
	}
   	if (c)
    {
        if (cont != 0)
		{
			if(s[9+cont/2]<0)
			{
				s = s.insert(9 + cont/2 - 2, ".");
				s[9+cont/2]= 0;
				s = s.substr(0, 9 + cont/2-1 );
			}
			else
			{
				s = s.insert(9 + cont/2, ".");
				s = s.substr(0, 9 +1+ cont/2);
			}
			
		} 
		else {
		s = s.substr(0, 9);
		s = s.insert(9, ".");
		}
		std::cout << s ;
		return;
	}
	else
	{
	cont = cont/2;
	std::cout << std::setw(10+cont);
	std::cout << s ;
	}
	return;
}



