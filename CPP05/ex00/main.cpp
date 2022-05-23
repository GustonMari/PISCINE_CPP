/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 15:13:58 by gmary             #+#    #+#             */
/*   Updated: 2022/05/23 17:37:16 by gmary            ###   ########.fr       */
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
*/

#include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat mayor("Charles", 10);
	std::cout << "Name: " << mayor.getName() << std::endl;
	std::cout << "Grade: " << mayor.getGrade() << std::endl;
	
	return (0);
}