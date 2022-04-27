/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 13:34:45 by gmary             #+#    #+#             */
/*   Updated: 2022/04/27 10:47:33 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
/*
	class A  
	{ 
	public: 
	    int x; 
	protected: 
	    int y; 
	private: 
	    int z; 
	}; 
	
	class B : public A 
	{ 
	    // x is public 
	    // y is protected 
	    // z is not accessible from B 
	}; 
	
	class C : protected A 
	{ 
	    // x is protected 
	    // y is protected 
	    // z is not accessible from C 
	}; 
	
	class D : private A    // 'private' is default for classes 
	{ 
	    // x is private 
	    // y is private 
	    // z is not accessible from D 
	};
	
    ATTENTION BIEN CHECK LE 6.
    https://www.geeksforgeeks.org/inheritance-in-c/
    obj.ClassB::a = 10;
    obj.ClassC::a = 100;

	ATTENTION lorsquon herite dune valeur protected la valeur ne pas pas etre init
	via linitialisation list mais par egalite!!
*/


int main()
{
	ScavTrap	scavtrap1("Gilles");
	ScavTrap	scavtrap2("arthur");
	ScavTrap	scavtrap3;
	scavtrap1.ScavTrap::attack("arthur");
	scavtrap2.ClapTrap::takeDamage(20);
	scavtrap3.ScavTrap::attack("Gilles");
	scavtrap1.ClapTrap::beRepaired(20);
	scavtrap1.ScavTrap::guardGate();
	return (0);
}