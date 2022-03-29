/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CasterInt.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleveque <pleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 14:35:06 by pleveque          #+#    #+#             */
/*   Updated: 2022/03/29 14:41:13 by pleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CASTERINT_HPP
#	define CASTERINT_HPP

#include <iostream>
#include <string>
#include "Caster.hpp"

class CasterInt : public Caster
{

    private:
        int   _i;

    public:
        /* coplien */
        CasterInt( void );
        CasterInt( int i );
        CasterInt( CasterInt const &src );
        ~CasterInt( void );

        CasterInt &   operator=( CasterInt const & rhs );
        /* end coplien */

        virtual char    toChar( void ) const;
        virtual int	    toInt( void ) const;
        virtual float	toFloat( void ) const;
        virtual double  toDouble( void ) const;
};


#endif