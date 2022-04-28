#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

int main()
{
	string	str("HI THIS IS BRAIN");
	string	*stringPTR = &str;
	string	&stringREF = str;

	cout << "Memory address of string : " << &str << endl;
	cout << "Memory address held by stringPTR : " << stringPTR << endl;
	cout << "Memory address held by stringREF : " << &stringREF << endl;

	cout << "Value of string : " << str << endl;
	cout << "Value pointed by stringPTR : " << *stringPTR << endl;
	cout << "Value pointed by stringREF : " << stringREF << endl;
}
