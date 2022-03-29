/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkType.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleveque <pleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 17:15:20 by pleveque          #+#    #+#             */
/*   Updated: 2022/03/29 15:38:14 by pleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <ctype.h>
#include <math.h>
#include <cerrno>

bool    checkFloat( std::string str, float *f ) {

    bool point = false;
    bool fl = false;
    if ( str == "nanf" ) {

        *f = ::atof( "NAN" );
        return ( true );
    }   else if ( str == "+inff" ) {

        float t = 0;
        *f = 1/t;
        return ( true );
    }   else if ( str == "-inff" ) {

        float t = 0;
        *f = -1/t;
        return ( true );
    }
    for ( unsigned int i = 0; i < str.length(); ++i )
    {
        if ( i == 0 && (str[i] == '-' || str[i] == '+') )
            continue;
        if ( !isdigit(str[i]) )
        {
            if ( !( str[i] == '.' && ::isdigit( str[i + 1] ) )
                    && !( (str[i] == 'f' || str[i] == 'F') && str[i + 1] == '\0' )
            )
                return ( false );
            if ( str[i] == 'f' || str[i] == 'F' )
                fl = true;
            if (str[i] == '.' || point == true )
                point = true;
        }
    }
    *f = ::atof( str.c_str() );
    return ( point && fl );
}

bool    checkInt( std::string str, int *intV ) {

    for ( unsigned int i = 0; i < str.length(); ++i )
    {
        if ( i == 0 && (str[i] == '-' || str[i] == '+') )
            continue;
        if ( !isdigit(str[i]) )
            return ( false );
    }
    *intV = ::atoi( str.c_str() );
    return ( true );
}

bool    checkDouble( std::string str, double *d ) {

    bool point = false;
    if ( str == "nan" ) {

        *d = ::atof( "NAN" );
        return ( true );
    }   else if ( str == "+inf" ) {

        float t = 0;
        *d = 1/t;
        return ( true );
    }   else if ( str == "-inf" ) {

        float t = 0;
        *d = -1/t;
        return ( true );
    }
    for ( unsigned int i = 0; i < str.length(); ++i )
    {
        if ( i == 0 && (str[i] == '-' || str[i] == '+') )
            continue;
        if ( !isdigit(str[i]) )
        {
            if ( !( str[i] == '.' && ::isdigit( str[i + 1] ) ) || point == true )
                return ( false );
            if (str[i] == '.')
                point = true;
        }
    }
    *d = ::atof( str.c_str() );
    return ( point );
}

bool    checkChar( std::string str, char *intV ) {

    if ( str.length() != 1 )
        return ( false );
    *intV = str[0];
    return ( true );
}