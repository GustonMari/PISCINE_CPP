/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 15:13:58 by gmary             #+#    #+#             */
/*   Updated: 2022/05/26 11:34:47 by gmary            ###   ########.fr       */
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
	La fonction srand permet d'initialiser le générateur de nombres aléatoires
	(la fonction rand) fournit par la librairie C standard.
	The rand() % 100 will give you a random number between 0 and 100,
	and the probability of it being under 75 is, well, 75%. You can substitute the 75 for any probability you wan
	(rand() % 100) < 75;
*/

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

//TODO	passer en abstract form
//TODO comment faire le check si le form est sign ou pas dans execute ??

int	main(void)
{
	try
	{
		//! CREATE TREES (145, 137)
		//std::cout << "---------------------------------------------------------------------" << std::endl;
		//Bureaucrat mayor("Mayor", 140);
		//ShrubberyCreationForm trees("trees");
		//trees.Form::beSigned(mayor);
		//std::cout << BGRN "OK" CRESET << std::endl;
		//trees.execute(mayor);
		////! CREATE ROBOTOMY REQUEST FAIL (72, 45)
		//std::cout << "---------------------------------------------------------------------" << std::endl;
		//Bureaucrat mayor_2("Jacques", 65);
		//RobotomyRequestForm android("TERMINATOR");
		//android.Form::beSigned(mayor_2);
		//std::cout << BGRN "OK" CRESET << std::endl;
		//android.execute(mayor_2);
		//! CREATE ROBOTOMY REQUEST SUCCEED (72, 45)
		std::cout << "---------------------------------------------------------------------" << std::endl;
		Bureaucrat mayor_3("Mayor", 1);
		RobotomyRequestForm android_2("R2R");
		android_2.Form::beSigned(mayor_3);
		std::cout << BGRN "OK" CRESET << std::endl;
		android_2.execute(mayor_3);
		//! CREATE PRESIDENTIAL PARDON (25, 5)
		std::cout << "---------------------------------------------------------------------" << std::endl;
		Bureaucrat president("President", 1);
		PresidentialPardonForm pardon("Pardon");
		pardon.Form::beSigned(president);
		std::cout << BGRN "OK" CRESET << std::endl;
		pardon.execute(president);
	}
	catch(const std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
