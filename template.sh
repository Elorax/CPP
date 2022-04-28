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
	~${newclass}();

	private:
	string	m_name;

};

#endif" > "${newclass}.hpp"

	echo "#include \"${newclass}.hpp\"

${newclass}::${newclass}(string name): m_name(name)
{
}

${newclass}::~${newclass}()
{
}" > "${newclass}.cpp"
done
