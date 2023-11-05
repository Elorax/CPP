#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <iostream>
# include <string>

class	WrongAnimal
{
	public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal&);
	WrongAnimal	&operator=(const WrongAnimal&);
	~WrongAnimal();

	std::string	getType() const;

	void	makeSound() const;

	protected:
	std::string	_type;
};

#endif
