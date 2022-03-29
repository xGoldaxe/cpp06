/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CasterDouble.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleveque <pleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 15:05:54 by pleveque          #+#    #+#             */
/*   Updated: 2022/03/29 15:16:20 by pleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cmath>
#include <climits>
#include <limits>

#include "CasterDouble.hpp"

/* COPLIEN */

CasterDouble::CasterDouble( void ) : _d ( 0 )	{

    return ;
}

CasterDouble::CasterDouble( double d ) : _d ( d )	{

    return ;
}

CasterDouble::~CasterDouble( void ) {

    return ;
}

CasterDouble::CasterDouble( CasterDouble const &src ) : _d ( 0 )	{

    *this = src;
    
    return ;
}

CasterDouble &	CasterDouble::operator=( CasterDouble const & rhs )	{

    if ( this != &rhs ) {

        /* copy everything */
    }

    return (*this);
}

/* END COPLIEN */

char	CasterDouble::toChar( void ) const {

    double d = this->_d;
    if (d <= std::numeric_limits<int>::max()
		&& d >= std::numeric_limits<int>::min()
		&& d != std::numeric_limits<double>::infinity()
		&& d != -std::numeric_limits<double>::infinity()
		&& d != std::numeric_limits<double>::quiet_NaN()
        && d == d)
    {
        return ( static_cast<char>(this->_d) );
    }
    else {

        throw ( Caster::impossibleException() );
    }
}

int	CasterDouble::toInt( void ) const	{

    double d = this->_d;
    if (d <= std::numeric_limits<int>::max()
		&& d >= std::numeric_limits<int>::min()
		&& d != std::numeric_limits<double>::infinity()
		&& d != -std::numeric_limits<double>::infinity()
		&& d != std::numeric_limits<double>::quiet_NaN()
        && d == d)
    {
        return ( static_cast<int>(this->_d) );

    }
    else {

        throw ( Caster::impossibleException() );
    }
}

float	CasterDouble::toFloat( void ) const {

    return ( static_cast<double>(this->_d) );
}

double	CasterDouble::toDouble( void ) const {

    return ( this->_d );
}