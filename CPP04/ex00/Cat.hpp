#ifndef CAT_HPP
# define CAT_HPP
# include <iostream>
# include <string>
# include "Animal.hpp"

using	std::string;
using	std::cout;
using	std::endl;

class	Cat : public Animal
{
	public:
	Cat();
	Cat(const Cat&);
	//Cat	&operator=(const Cat&);
	~Cat();
	void	makeSound() const;
};

#endif
