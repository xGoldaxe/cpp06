/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CasterFloat.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleveque <pleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 14:50:06 by pleveque          #+#    #+#             */
/*   Updated: 2022/03/29 14:55:01 by pleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CASTERFLOAT_HPP
#	define CASTERFLOAT_HPP

#include <iostream>
#include <string>
#include "Caster.hpp"

class CasterFloat : public Caster
{

    private:
        float   _f;

    public:
        /* coplien */
        CasterFloat( void );
        CasterFloat( float f );
        CasterFloat( CasterFloat const &src );
        ~CasterFloat( void );

        CasterFloat &   operator=( CasterFloat const & rhs );
        /* end coplien */

        virtual char    toChar( void ) const;
        virtual int	    toInt( void ) const;
        virtual float	toFloat( void ) const;
        virtual double  toDouble( void ) const;
};


#endif