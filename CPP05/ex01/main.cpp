/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 15:13:58 by gmary             #+#    #+#             */
/*   Updated: 2022/05/25 10:33:41 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	std::cerr pour la sortie d'erreur
	https://cutt.ly/VHXIkXY super pour avoir la liste des types dexceptions
	Dans l'exemple ci-dessus, what() est une méthode publique 
	fournie par la classe d'exception. 
	Elle est utilisée pour renvoyer la cause d'une exception.
	
	catch (...) permet de capturer toutes les exceptions
	_name etant const on peut que la changer lors de linitialisation
	https://stackoverflow.com/questions/8152720/correct-way-to-inherit-from-stdexception
	http://peterforgacs.github.io/2017/06/25/Custom-C-Exceptions-For-Beginners/
	https://riptutorial.com/cplusplus/example/23640/custom-exception
	TOP, super pour comprendre pq on inherit de std::exception
	The main benefit is that code using your classes doesn't have to know 
	exact type of what you throw at it, 
	but can just catch the std::exception.
	https://stackoverflow.com/questions/1669514/should-i-inherit-from-stdexception
	https://stackoverflow.com/questions/6755991/catching-stdexception-by-reference
	https://stackoverflow.com/questions/5230463/what-does-this-function-declaration-mean-in-c
	https://docs.microsoft.com/fr-fr/cpp/standard-library/overloading-the-output-operator-for-your-own-classes?view=msvc-170
	on doit declarer dans la class friend pour loperateur << 
	pour quil puisse acceder au variable et quil puisse avoir deux operateur
	par contre lors de la declaration onne doit pas avoir Bureaucrat::operator<<
	https://stackoverflow.com/questions/10744787/operator-must-take-exactly-one-argument
	catch(Form::GradeTooLowException & e) permet de catch une exeception particuliere
	catch(const std::exception & e) permet de chopper tte les exception comme (...)
*/

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	try
	{
		//! INIT
		//Form law("Police enforcement", -1, 150);
		////! beSign Form to low
		//Bureaucrat employee("Waiter", 15);
		//Form law_2("Police enforcement", 10, 150);
		//std::cout << law_2;
		//law_2.beSigned(employee);
		//std::cout << law_2;
		////! beSign Form OK
		//Bureaucrat employee("Marshall", 10);
		//Form law_2("Police enforcement", 10, 150);
		//std::cout << law_2;
		//law_2.beSigned(employee);
		//std::cout << law_2;
		////! Sign Form OK
		Bureaucrat chief("Marshall", 10);
		Form law_2("Police enforcement", 10, 150);
		law_2.beSigned(chief);
		law_2.signForm(chief);
	}
	catch(const std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
