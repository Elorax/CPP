#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
# include <iostream>
# include <string>
# include "WrongAnimal.hpp"

using	std::string;
using	std::cout;
using	std::endl;

class	WrongCat : public WrongAnimal
{
	public:
	WrongCat();
	WrongCat(const WrongCat&);
	//WrongCat	&operator=(const WrongCat&);
	~WrongCat();
	void	makeSound() const;
};

#endif
