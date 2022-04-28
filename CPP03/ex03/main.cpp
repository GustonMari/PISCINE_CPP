/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 13:34:45 by gmary             #+#    #+#             */
/*   Updated: 2022/04/28 08:58:53 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"
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
	base class is ambiguous : signifie quil y a une multiple inheritance pausant probleme
	ici par exemple ici DiamondTrap herite a la fois de DiamondTrap et de ScavTrap et
	par consequent elle herite DEUX FOIS de ClapTrap:
	https://stackoverflow.com/questions/137282/how-can-i-avoid-the-diamond-of-death-when-using-multiple-inheritance
	https://www.programiz.com/cpp-programming/virtual-functions
	virtual permet en gros de bypass une fonction dune class via virtual, ainsi on bypass
	les doublons et on utilise seulement celle de claptrap
*/


int main()
{
	//ATTENTION DIAMOND_TRAP DOIT AVOIR LE MM NAME QUE LES AUTRES CLASS ??
	DiamondTrap	DiamondTrap;
	//DiamondTrap	DiamondTrap1("Marlo");
	//DiamondTrap	DiamondTrap2("Omar");
	//DiamondTrap	DiamondTrap3("Stringer Bell");
	//DiamondTrap1.ScavTrap::attack("Omar");
	//DiamondTrap2.ScavTrap::takeDamage(20);
	//DiamondTrap3.ScavTrap::attack("Marlo");
	//DiamondTrap1.ClapTrap::beRepaired(20);
	//DiamondTrap1.FragTrap::highFivesGuys();
	return (0);
}