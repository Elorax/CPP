#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include <iostream>
# include <string>
//# include ".hpp"

using	std::string;
using	std::cout;
using	std::endl;

class	Character : public ICharacter
{
	public:
	Character();
	Character(const Character&);
	Character	&operator=(const Character&);
	~Character();

	protected:
	string	_name;
};

#endif
