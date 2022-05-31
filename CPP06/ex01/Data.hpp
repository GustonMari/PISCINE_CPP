/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 17:13:02 by gmary             #+#    #+#             */
/*   Updated: 2022/05/31 17:44:47 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP
# include <iostream>
# include <string>
# include <stdint.h>

class Data
{
	public:
		Data();
		Data(const Data & copy);
		Data(int i, std::string s);
		
		~Data();
		
		Data & operator=(const Data & copy);

		void	printValues();
	private:
		int	private_data;
		std::string confidential_name;
};

#endif