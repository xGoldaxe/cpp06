/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CasterInt.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleveque <pleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 14:36:29 by pleveque          #+#    #+#             */
/*   Updated: 2022/03/29 14:40:50 by pleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "CasterInt.hpp"

/* COPLIEN */

CasterInt::CasterInt( void )	{

    return ;
}

CasterInt::CasterInt( int i ) : _i(i)	{

    return ;
}

CasterInt::~CasterInt( void ) {

    return ;
}

CasterInt::CasterInt( CasterInt const &src ) : _i( 0 )	{

    *this = src;
    
    return ;
}

CasterInt &	CasterInt::operator=( CasterInt const & rhs )	{

    if ( this != &rhs ) {

        /* copy everything */
    }

    return (*this);
}

/* END COPLIEN */

char	CasterInt::toChar( void ) const {

    return ( static_cast<char>(this->_i) );
}

int	    CasterInt::toInt( void ) const	{

    return ( this->_i );
}

float	CasterInt::toFloat( void ) const {

    return ( static_cast<float>(this->_i) );
}

double	CasterInt::toDouble( void ) const {

    return ( static_cast<double>(this->_i) );
}