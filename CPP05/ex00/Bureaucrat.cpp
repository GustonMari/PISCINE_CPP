/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 15:47:30 by gmary             #+#    #+#             */
/*   Updated: 2022/05/23 15:54:59 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	std::cout << "Bureaucrat was constructed" << std::endl;
	this->_name = "NO NAME";
	this->_grade = 0;
}

Bureaucrat::Bureaucrat(std::string name, int grade)
{
	//WARNING faire securite pour NAME ET GRADE
	this->_name = name;
	this->_grade = grade;
	std::cout << "Bureaucrat "<< _name <<" grade " << _grade << "was constructed" << std::endl;

}