/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 15:13:58 by gmary             #+#    #+#             */
/*   Updated: 2022/06/09 14:05:10 by gmary            ###   ########.fr       */
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
*/

#include "Bureaucrat.hpp"

int	main(void)
{
	try
	{
		//! INIT
		//Bureaucrat mayor("Charles", -1) ;
		//std::cout << mayor;
		//Bureaucrat mayor_2("Jacques", 151);
		////! INCREMENT DECREMENT
		Bureaucrat mayor_3("Pierre", 1);
		Bureaucrat mayor_4("Jean-Michel", 150);
		mayor_3.incrementGrade();
		mayor_4.decrementGrade();
		std::cout << "Name: " << mayor_3.getName() << std::endl;
		std::cout << "Grade: " << mayor_3.getGrade() << std::endl;
		std::cout << mayor_4;
	}
	catch(Bureaucrat::GradeTooHighException & e)
	{
		std::cerr << e.what() << '\n';
	}
	catch(Bureaucrat::GradeTooLowException & e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}

/* int	main(void)
{
	//! INIT
	Bureaucrat mayor("Charles", -1);
	std::cout << mayor;
	Bureaucrat mayor_2("Jacques", 151);
	////! INCREMENT DECREMENT
	Bureaucrat mayor_3("Pierre", 1);
	Bureaucrat mayor_4("Jean-Michel", 150);
	mayor_4.decrementGrade();
	mayor_3.incrementGrade();
	std::cout << "Name: " << mayor_3.getName() << std::endl;
	std::cout << "Grade: " << mayor_3.getGrade() << std::endl;
	std::cout << mayor_4;
	return (0);
} */