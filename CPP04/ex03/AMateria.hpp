#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include <iostream>
# include <string>

using	std::string;
using	std::cout;
using	std::endl;

class	AMateria
{
	protected:
	string	_type;



	public:
	AMateria(string const &type);

	string const &getType() const;	//returns materia type

	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter &target);

};

#endif
