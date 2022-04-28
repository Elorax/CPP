#include <iostream>
#include <string>

class	Date
{
	public:
	Date(int day, int month, int year);

	protected:
	int	m_day;
	int	m_month;
	int	m_year;


};

Date::Date(int day, int month, int year) : m_day(day), m_month(month), m_year(year)
{
	int	valide(1);
	if (m_month > 12 || m_month < 1)
		valide = 0;
	if (m_day > 31 || m_day < 1)
		valide = 0;
	else if (m_day > 30 && ((m_month < 7 && !(m_month%2)) || (m_month > 7 && m_month%2)))
		valide = 0;
	else if (m_day > 29  && m_month == 2)
		valide = 0;
	else if (m_day == 29 && m_month == 2 && m_year%4)
		valide = 0;
	else if (m_year < 1900 || m_year > 2021)
		valide = 0;
	if (!valide)
	{
		m_day = 0;
		m_month = 0;
		m_year = 0;
	}
}


class	Contact
{
	public:
	Contact();
	void	setFirstName(std::string const& str);


	protected:
	std::string	m_firstName;
	std::string	m_lastName;
	std::string	m_nickname;
	std::string	m_login;
	std::string	m_postalAdress;
	std::string	m_email;
	std::string	m_mobile;
	Date		m_birthday;
	std::string	m_meal;
	std::string	m_underwearColor;
	std::string	m_secret;

};

Contact::Contact() : m_firstName(""), m_lastName(""), m_nickname(""), m_login(""), m_postalAdress(""), m_email(""), m_mobile(""), m_birthday(0, 0, 0), m_meal(""), m_underwearColor(""), m_secret("")
{

}

void	Contact::setFirstName(std::string const& str)
{
	m_firstName = str;
}




int main()
{
	std::string input("");
	int	tmp(0);
	Contact	repertoire[8];
	Date	date[8];
	std::cout << "Please enter one of the following key words : ADD, SEARCH or EXIT" << std::endl;
	while (input != "EXIT")
	{
		std::cin >> input;
		if (input == "ADD")
		{
			std::out << "Enter your first name" << std::endl;
			std::cin >> input;
			repertoire[i].setFirstName(input);
			std::out << "Enter your last name" << std::endl;
			std::cin >> input;
			repertoire[i].setLastName(input);
			std::out << "Enter your nickname" << std::endl;
			std::cin >> input;
			repertoire[i].setNickname(input);
			std::out << "Enter your login" << std::endl;
			std::cin >> input;
			repertoire[i].setLogin(input);
			std::out << "Enter your postal adress" << std::endl;
			std::cin.ignore();
			getline(std::cin, input);
			repertoire[i].setPostal(input);
			std::out << "Enter your email adress" << std::endl;
			std::cin >> input;
			repertoire[i].setEmail(input);
			std::out << "Enter your phone number" << std::endl;
			std::cin >> input;
			repertoire[i].setMobile(input);
			std::out << "Enter your birthday date (DD/MM/YYYY)" << std::endl;
			std::cin >> input;
			date[i].setDate((input[0] - '0' ) * 10 + input[1] - '0', (input[3] - '0') * 10 + (input[4] - '0'),1998);
			repertoire[i].setDate(date[i]);
			std::out << "Enter your favorite meal" << std::endl;
			std::cin.ignore();
			getline(std::cin, input);
			repertoire[i].setMeal(input);
			std::out << "Enter your underwear color" << std::endl;
			getlin(std::cin, input);
			repertoire[i].setFirstName(input);
			std::out << "Enter your first name" << std::endl;
			std::cin >> input;
			setFirstName(input);
			
		}
		else if (input == "SEARCH")
		{

		}
	}

}
