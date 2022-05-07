#!/bin/bash

for rep in $@
do
	newclass=${rep}
	upclass=${newclass^^}

	echo "#ifndef ${upclass}_HPP
# define ${upclass}_HPP
# include <iostream>
# include <string>
//# include \".hpp\"

using	std::string;
using	std::cout;
using	std::endl;

class	${newclass}
{
	public:
	${newclass}();
	${newclass}(const ${newclass}&);
	${newclass}	&operator=(const ${newclass}&);
	~${newclass}();

	protected:
	string	_name;
};

#endif" > "${newclass}.hpp"

	echo "#include \"${newclass}.hpp\"

${newclass}::${newclass}(string name)
{

}
${newclass}::${newclass}(const ${newclass}& toCopy)
{

}

${newclass}	&${newclass}::operator=(const ${newClass}& toAssign)
{

	return (*this);
}

${newclass}::~${newclass}()
{

}" > "${newclass}.cpp"
done
