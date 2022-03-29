/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleveque <pleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 12:00:22 by pleveque          #+#    #+#             */
/*   Updated: 2022/03/29 15:37:08 by pleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Caster.hpp"
#include "CasterChar.hpp"
#include "CasterInt.hpp"
#include "CasterFloat.hpp"
#include "CasterDouble.hpp"
#include <ctype.h>
#include <math.h>
#include <cerrno>
bool    checkFloat( std::string str, float *f );
bool    checkInt( std::string str, int *intV );
bool    checkDouble( std::string str, double *d );
bool    checkChar( std::string str, char *intV );

Caster  *getCasterFromStr( std::string str ) {

    float f;
    if ( checkFloat( str, &f ) )
        return ( new CasterFloat( f ));
    int i;
    if ( checkInt( str, &i ) )
        return ( new CasterInt( i ));
    double d;
    if ( checkDouble( str, &d ) )
        return ( new CasterDouble( d ));
    char c;
    if ( checkChar( str, &c ) )
        return ( new CasterChar( c ));
    return ( NULL );
}

int main( int argc, char **argv ) {

    if (argc != 2) {

        std::cout << "invalid args!" << std::endl;
        return ( 1 );
    }
    std::string str = static_cast<std::string>( argv[1] );
    Caster* caster = getCasterFromStr( str );
    if (!caster) {

        std::cout << "invalid arg!" << std::endl;
        return ( 1 );
    }
    if ( errno == 34 ) {
		std::cout << "invalid arg!" << std::endl;
    } else
        std::cout << *caster;

    delete caster;
    return (0);
}