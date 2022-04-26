/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 13:34:45 by gmary             #+#    #+#             */
/*   Updated: 2022/04/26 13:46:14 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/*
    A) Public mode: If we derive a sub class from a public base class.
    Then the public member of the base class will become public in the derived class 
    and protected members of the base class will become protected in derived class.
    
    B) Protected mode: If we derive a sub class from a Protected base class.
    Then both public member and protected members of the base class 
    will become protected in derived class.
    
    C) Private mode: If we derive a sub class from a Private base class. 
    Then both public member and protected members of the base class 
    will become Private in derived class. 

    ATTENTION BIEN CHECK LE 6.
    https://www.geeksforgeeks.org/inheritance-in-c/
    obj.ClassB::a = 10;
    obj.ClassC::a = 100;
*/


int main()
{
    
}