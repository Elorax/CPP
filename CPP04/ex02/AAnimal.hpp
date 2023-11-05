#ifndef AANIMAL_HPP
# define AANIMAL_HPP
# include <iostream>
# include <string>

class	AAnimal
{
	public:
	AAnimal();
	AAnimal(const AAnimal&);
	AAnimal	&operator=(const AAnimal&);
	virtual	~AAnimal();
	std::string	getType() const;

	virtual void	makeSound() const = 0;

	protected:
	std::string	_type;
};

#endif
