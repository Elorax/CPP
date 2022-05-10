#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>
# include <string>

using	std::string;
using	std::cout;
using	std::endl;

class	Animal
{
	public:
	Animal();
	Animal(const Animal&);
	Animal	&operator=(const Animal&);
	virtual	~Animal();
	string	getType() const;

	virtual void	makeSound() const = 0;

	protected:
	string	_type;
};

#endif
