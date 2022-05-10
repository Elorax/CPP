#include "AMateria.hpp"

AMateria::AMateria(string const &type): _type(type)
{
	//cout << "AMateria constructor called" << endl;
}
AMateria::AMateria(const AMateria& toCopy)
{
	//cout << "AMateria copy constructor" << endl;
	_type = toCopy._type;
}

AMateria	&AMateria::operator=(const AMateria &toAssign)
{
	this->_type = toAssign._type;
	return (*this);
}

AMateria::~AMateria()
{
	//cout << "AMateria destructor" << endl;
}

void	AMateria::use(Icharacter &target)
{
	
}
