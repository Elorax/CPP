#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <iostream>
# include <string>

using	std::string;
using	std::cout;
using	std::endl;

class	WrongAnimal
{
	public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal&);
	WrongAnimal	&operator=(const WrongAnimal&);
	~WrongAnimal();

	string	getType() const;

	void	makeSound() const;

	protected:
	string	_type;
};

#endif
