#ifndef DOG_HPP
# define DOG_HPP
# include <iostream>
# include <string>
# include "AAnimal.hpp"
# include "Brain.hpp"

class	Dog : public AAnimal
{
	public:
	Dog();
	Dog(const Dog&);
	Dog	&operator=(const Dog&);
	~Dog();
	void	makeSound() const;

	std::string	getIdea(int nb) const;
	void	setIdea(std::string str, int nb);
	
	private:
	Brain	*brain;
};

#endif
