/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 15:13:58 by gmary             #+#    #+#             */
/*   Updated: 2022/05/24 18:50:47 by gmary            ###   ########.fr       */
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
	-dansle getter il ne faut pas retourner const int  car cela cree une erreur e compilation
	mais ne cree pas derreur de compilation avec str
	-arguments dans une initialisation list doivent etre dans le mm ordre que dans la class
	https://stackoverflow.com/questions/160147/catching-exceptions-from-a-constructors-initializer-list
	https://stackoverflow.com/questions/17564037/c-constructor-initializer-list-throw-exceptions
	http://www.gotw.ca/gotw/066.htm
*/

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "colors.h"

int	main(void)
{
	//! INIT
	/* 
		TODO:
		 il faut voir comment catch try sur linit list de form et faut il avoir _required_execute dans besigned et signform ???
	*/
	Form law("Marcel", -1, 150);
	std::cout << law;
	std::cout << UMAG<< law.get_name()
			<< " " << law.get_sign()
			<< " " << law.get_required_sign()
			<< " " << law.get_required_execute() << CRESET << std::endl;
	
	////! INCREMENT DECREMENT

	return (0);
}