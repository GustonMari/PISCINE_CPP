/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 14:22:39 by gmary             #+#    #+#             */
/*   Updated: 2022/05/31 16:49:08 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "All.hpp"
/*
	-> lorsque'on est situation de dynamique cast on estd ans une situation
	ou les rtti sont active, cad quon a une classe polymorphique avec une methode
	(une fonction membre qui est virtual) => il permet de verifier un type lors dun cast
	via:
		catch(const std::bad_cast& e)
		{
			std::cout << e.what() << '\n';
		}
	https://www.geeksforgeeks.org/dynamic-_cast-in-cpp/
	-> reinterpret_cast est un cast permet de passer par exemple dun void a un int 
	(pour faire des retypage)
	->reinterpret_cast: https://fr.acervolima.com/reinterpret_cast-en-c-type-operateurs-de-coulee/
	->const_cast ne fonctionne pas sur les pointeurs de fonctions
	https://www.geeksforgeeks.org/const_cast-in-c-type-casting-operators/
	->  It is a compile time cast.It does things like implicit conversions between types 
	(such as int to float, or pointer to void*), 
	and it can also call explicit conversion functions (or implicit ones).
	->The above code will not compile even if you inherit as protected.
	 So to use static_cast, inherit it as public.
	https://docs.microsoft.com/fr-fr/cpp/cpp/static-cast-operator?view=msvc-170
	->explicit: Specifies that a constructor or conversion function (since C++11) 
	or deduction guide (since C++17) is explicit,
	that is, it cannot be used for implicit conversions and copy-initialization.
	https://stackoverflow.com/questions/121162/what-does-the-explicit-keyword-mean
	std::numeric_limits<int>::min() std::numeric_limits<int>::max()
	(str.find("int") != std::string::npos) => sorte de strchr qui renvoie la position
	de la premiere occurence
	-> a la place de c_str() on peut utiliser data() qui retourne un pointeur
*/

void	convert_integer(std::string str)
{
	int	i;

	i = atoi(str.c_str());
	if (!std::isprint(static_cast<char>(i)))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(i) << "'" << std::endl;
	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << static_cast<float>(i) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(i) << ".0" << std::endl;
}

void	convert_float(std::string str)
{
	float	f;

	f = std::strtof(str.c_str(), NULL);
	if (ERANGE == errno)
	{
		std::cout << "char: Non displayable\nint: impossible\nfloat: impossible" << std::endl;
		std::cout << "double: " << std::strtod(str.c_str(), NULL) << ".0" << std::endl;
		exit (0);
	}
	if (!std::isprint(static_cast<char>(f)))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(f) << "'" << std::endl;
	if (f >= (float)INT_MIN && f <= (float)INT_MAX)
		std::cout << "int: " << static_cast<int>(f) << std::endl;
	else
		std::cout << "int: impossible" << std::endl;
	std::cout << "float: " << f << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(f) << ".0" << std::endl;
}

void	convert_char(char c)
{
	//std::cout << "char: " << c << std::endl;
	std::cout << "char: " << static_cast<char>(static_cast<int>(c)) << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
}

void	convert_double(std::string str)
{
	double d;


	d = std::strtod(str.c_str(), NULL);
	if (ERANGE == errno)
	{
		std::cout << "char: Non displayable\nint: impossible\nfloat: impossible\ndouble: impossible" << std::endl;
		exit (0);
	}
	if (!std::isprint(static_cast<char>(d)))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>((d)) << "'" << std::endl;
	if (d >= INT_MIN && d <= INT_MAX)
		std::cout << "int: " << static_cast<int>(d) << std::endl;
	else
		std::cout << "int: impossible" << std::endl;
	if ((d >= -FLT_MAX/*  && d <= -FLT_MIN */) && (/* d >= FLT_MIN &&  */d <= FLT_MAX))
		std::cout << "float: " << static_cast<float>(d) << ".0f" << std::endl;
	else
		std::cout << "float: impossible" << std::endl;
	if ((d >= -DBL_MAX/*  && d <= -DBL_MIN */) && (/* d >= DBL_MIN &&  */d <= DBL_MAX))
		std::cout << "double: " << d << ".0" << std::endl;
	else
		std::cout << "double: impossible" << std::endl;
}

void	define_conversion_type(std::string str)
{
	double d;
	
	d = std::strtod(str.c_str(), NULL);
	if (ERANGE == errno)
	{
		std::cout << "char: Non displayable\nint: impossible\nfloat: impossible\ndouble: impossible" << std::endl;
		exit (0);
	}
	if (d >= FLT_MIN && d <= FLT_MAX && str[str.length() - 1] == 'f')
		convert_float(str);
	else if (d >= INT_MIN && d <= INT_MAX && (str.find(".") == std::string::npos))
		convert_integer(str);
	else
		convert_double(str);
	//if (d >= DBL_MIN && d <= DBL_MAX && str.find(".") != std::string::npos)
}

//TODO: que ce passe til pour +inf et +infff ???

void	convert_particuliar(std::string str)
{
	std::cout << "char: Non displayable\nint: impossible" << std::endl;
	if (str.compare("-inf") == 0)
		std::cout << "float: -inff\ndouble: -inf" << std::endl;
	else if (str.compare("+inf") == 0)
		std::cout << "float: +inff\ndouble: +inf" << std::endl;
	else if (str.compare("+inff") == 0)
		std::cout << "float: +inff\ndouble: +inf" << std::endl;
	else if (str.compare("-inff") == 0)
		std::cout << "float: -inff\ndouble: -inf" << std::endl;
	else if (str.compare("nan") == 0)
		std::cout << "float: nanf\ndouble: nan" << std::endl;
	else if (str.compare("nanf") == 0)
		std::cout << "float: nanf\ndouble: nan" << std::endl;
	else
		std::cout << "float: impossible\ndouble: impossible" << std::endl;
}

bool	particuliar_case(std::string str)
{
	std::string tab[6] = {"-inff", "-inf", "+inff", "+inf", "nan", "nanf"};

	for (int i = 0; i < 6 ; i++)
	{
		if (str.compare(tab[i]) == 0)
			return (true);
	}
	return (false);
}

// FLT_MAX DBL_MAX

//TODO: comment convert le char en int et surtout doit ton proteger la conversion en char
//lorsque l'on rentre par exemple  40000
//TODO: vraiment tout recheck
int main(int ac, char **av)
{
	std::string	str;

	if(ac == 2)
	{
		str.assign(av[1]);
		if (str.empty())
		{
			std::cout << "Nothing to convert" << std::endl;
			return (0);
		}
		if (particuliar_case(str) == true)
			convert_particuliar(str);
		else if (is_a_str(str) == false)
			convert_char(str[0]);
		else
			define_conversion_type(str);
	}
	return (0);
}
