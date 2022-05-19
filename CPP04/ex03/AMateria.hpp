/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 16:03:04 by gmary             #+#    #+#             */
/*   Updated: 2022/05/19 17:42:54 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include "All.hpp"

class	AMateria
{
	public:
		AMateria();
		AMateria(std::string const & type);
		AMateria(AMateria const & src);
		AMateria &operator=(AMateria const & src);
		virtual ~AMateria();
		//more to add
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0; //function pure virtual
		virtual void use(ICharacter& target);
	protected:
		std::string _type;
		//more to add
};

#endif