#ifndef CAT_HPP
# define CAT_HPP
# include <iostream>
# include <string>
# include "AAnimal.hpp"
# include "Brain.hpp"

class	Cat : public AAnimal
{
	public:
	Cat();
	Cat(const Cat&);
	Cat	&operator=(const Cat&);
	~Cat();
	void	makeSound() const;

	std::string	getIdea(int nb) const;
	void	setIdea(std::string str, int nb);
	
	private:
	Brain	*brain;
};

#endif
