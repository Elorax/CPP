#ifndef BASE_HPP
# define BASE_HPP
# include <iostream>
# include <string>
# include <typeinfo>
# include <cstdlib>
# include <time.h>

using	std::string;
using	std::cout;
using	std::endl;

class	Base
{
	public:
	virtual ~Base() {}
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

Base	*generate(void);
void	identify(Base *p);
void	identify(Base &p);
#endif
