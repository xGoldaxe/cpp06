/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CasterChar.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleveque <pleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 12:10:00 by pleveque          #+#    #+#             */
/*   Updated: 2022/03/29 12:26:48 by pleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "CasterChar.hpp"

/* COPLIEN */

CasterChar::CasterChar( void ) : _c( 0 )	{

    return ;
}

CasterChar::CasterChar( char c ) : _c( c )	{

    return ;
}


CasterChar::~CasterChar( void ) {

    return ;
}
/*todo*/
CasterChar::CasterChar( CasterChar const &src ) : _c( 0 ){

    *this = src;

    return ;
}
/*todo*/
CasterChar &	CasterChar::operator=( CasterChar const & rhs )	{

    if ( this != &rhs ) {

        /* copy everything */
    }

    return (*this);
}

/* END COPLIEN */

char	CasterChar::toChar( void ) const {

    return ( this->_c );
}

int	CasterChar::toInt( void ) const	{

    return ( static_cast<int>(this->_c) );
}

float	CasterChar::toFloat( void ) const {

    return ( static_cast<float>(this->_c) );
}

double	CasterChar::toDouble( void ) const {

    return ( static_cast<double>(this->_c) );
}