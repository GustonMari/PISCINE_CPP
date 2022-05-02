/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 12:46:08 by gmary             #+#    #+#             */
/*   Updated: 2022/04/28 15:33:36 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>
# include <string>

class	Animal
{
	public:
		Animal();
		Animal(std::string name);
		Animal(const Animal & src);
		virtual	~Animal();
		Animal	&operator=(const Animal & src);
		virtual void	makeSound() const;
		std::string getType() const;
	protected:
		std::string	type;
};

#endif