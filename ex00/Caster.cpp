/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Caster.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleveque <pleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 12:04:31 by pleveque          #+#    #+#             */
/*   Updated: 2022/03/29 15:23:15 by pleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Caster.hpp"
#include <iomanip>

/* COPLIEN */

Caster::Caster( void )	{

    return ;
}

Caster::~Caster( void ) {

    return ;
}

Caster::Caster( Caster const &src )	{

    *this = src;
    
    return ;
}

Caster &	Caster::operator=( Caster const & rhs )	{

    if ( this != &rhs ) {

        /* copy everything */
    }

    return (*this);
}

/* END COPLIEN */

void    Caster::printChar( void ) const {

    try {
        char c = this->toChar();
        if (c > 32 && c < 126)
            std::cout << "char: '" << c << "'" << std::endl;
        else
            std::cout << "char: " << "Non displayable" << std::endl;
    } catch (const std::exception& e) {

        std::cout << "char: " << e.what() << std::endl;
    }
}

void    Caster::printInt( void ) const {

    try {

        int i = this->toInt();
        std::cout << "int: " << i << std::endl;
    } catch (const std::exception& e) {

        std::cout <<  "int: " << e.what() << std::endl;
    }
}

std::ostream &  operator<<( std::ostream & o, Caster const & f ) {

    f.printChar();
    f.printInt();
    std::cout << "Float: " << std::fixed << std::setprecision(1) << f.toFloat() << "f" << std::endl;
    std::cout << "Double: " << f.toDouble() << std::endl;

    return (o);
}