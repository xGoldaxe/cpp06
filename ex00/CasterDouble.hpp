/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CasterDouble.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleveque <pleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 15:03:48 by pleveque          #+#    #+#             */
/*   Updated: 2022/03/29 15:06:38 by pleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CASTERDOUBLE_HPP
#	define CASTERDOUBLE_HPP

#include <iostream>
#include <string>

#include "Caster.hpp"

class CasterDouble : public Caster
{

    private:
        double _d;

    public:
        /* coplien */
        CasterDouble( void );
        CasterDouble( double d );
        CasterDouble( CasterDouble const &src );
        ~CasterDouble( void );

        CasterDouble &   operator=( CasterDouble const & rhs );
        /* end coplien */

        virtual char    toChar( void ) const;
        virtual int	    toInt( void ) const;
        virtual float	toFloat( void ) const;
        virtual double  toDouble( void ) const;
};


#endif