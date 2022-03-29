/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CasterFloat.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleveque <pleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 14:51:25 by pleveque          #+#    #+#             */
/*   Updated: 2022/03/29 15:17:22 by pleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "CasterFloat.hpp"
#include <cmath>
#include <climits>
#include <limits>

/* COPLIEN */

CasterFloat::CasterFloat( void ) : _f ( 0 )	{

    return ;
}

CasterFloat::CasterFloat( float f ) : _f( f )	{

    return ;
}

CasterFloat::~CasterFloat( void ) {

    return ;
}

CasterFloat::CasterFloat( CasterFloat const &src ) : _f( 0.0f )	{

    *this = src;
    
    return ;
}

CasterFloat &	CasterFloat::operator=( CasterFloat const & rhs )	{

    if ( this != &rhs ) {

        /* copy everything */
    }

    return (*this);
}

/* END COPLIEN */

char	CasterFloat::toChar( void ) const {

    float f = this->_f;
    if (f <= std::numeric_limits<char>::max()
		&& f >= std::numeric_limits<char>::min()
		&& f != std::numeric_limits<float>::infinity()
		&& f != -std::numeric_limits<float>::infinity()
		&& f != std::numeric_limits<float>::quiet_NaN()
        && f == f)
    {
        return ( static_cast<char>(this->_f) );
    }
    else {

        throw ( Caster::impossibleException() );
    }
}

int	CasterFloat::toInt( void ) const	{

    float f = this->_f;
    if (f <= std::numeric_limits<int>::max()
		&& f >= std::numeric_limits<int>::min()
		&& f != std::numeric_limits<float>::infinity()
		&& f != -std::numeric_limits<float>::infinity()
		&& f != std::numeric_limits<float>::quiet_NaN()
        && f == f)
    {
        return ( static_cast<int>(this->_f) );

    }
    else {

        throw ( Caster::impossibleException() );
    }
}

float	CasterFloat::toFloat( void ) const {

    return ( this->_f );
}

double	CasterFloat::toDouble( void ) const {

    return ( static_cast<double>(this->_f) );
}