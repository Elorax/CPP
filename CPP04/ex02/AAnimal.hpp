#ifndef AANIMAL_HPP
# define AANIMAL_HPP
# include <iostream>
# include <string>

using	std::string;
using	std::cout;
using	std::endl;

class	AAnimal
{
	public:
	AAnimal();
	AAnimal(const AAnimal&);
	AAnimal	&operator=(const AAnimal&);
	virtual	~AAnimal();
	string	getType() const;

	virtual void	makeSound() const = 0;

	protected:
	string	_type;
};

#endif
