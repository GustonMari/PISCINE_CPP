/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 12:46:08 by gmary             #+#    #+#             */
/*   Updated: 2022/05/18 15:38:35 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>
# include <string>
# include "Brain.hpp"

class	AAnimal
{
	public:
		//AAnimal();
		//AAnimal(std::string name);
		//AAnimal(const AAnimal & src);
		virtual	~AAnimal();
		AAnimal	&operator=(const AAnimal & src);
		virtual void	makeSound() const = 0;
		//virtual void	makeSound() const = 0;
		std::string getType() const;
	protected:
		std::string	type;
		AAnimal();
		AAnimal(std::string name);
		AAnimal(const AAnimal & src);
};

#endif