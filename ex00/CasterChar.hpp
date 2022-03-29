/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CasterChar.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleveque <pleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 12:05:58 by pleveque          #+#    #+#             */
/*   Updated: 2022/03/29 12:27:12 by pleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CASTERCHAR_HPP
#	define CASTERCHAR_HPP

#include <iostream>
#include <string>
#include "Caster.hpp"

#define OK 0
#define DISPLAY_ERROR 1
#define ERROR 2

class CasterChar : public Caster
{

    private:
        char    _c;

    public:
        /* coplien */
        CasterChar( void );
        CasterChar( char c );
        CasterChar( CasterChar const &src );
        ~CasterChar( void );

        CasterChar &   operator=( CasterChar const & rhs );
        /* end coplien */

        /* getter */
        virtual char    toChar( void ) const;
        virtual int	    toInt( void ) const;
        virtual float	toFloat( void ) const;
        virtual double  toDouble( void ) const;
};


#endif