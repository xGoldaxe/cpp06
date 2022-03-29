/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Caster.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleveque <pleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 12:00:59 by pleveque          #+#    #+#             */
/*   Updated: 2022/03/29 15:03:41 by pleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CASTER_HPP
#	define CASTER_HPP

#include <iostream>
#include <string>

class Caster
{

    private:
        Caster( Caster const &src );
    
    public:
        /* coplien */
        Caster( void );
        virtual ~Caster( void );
        Caster &   operator=( Caster const & rhs );
        /* end coplien */

        /* getter */
        virtual char    toChar( void ) const = 0;
        virtual int	    toInt( void ) const = 0;
        virtual float	toFloat( void ) const = 0;
        virtual double  toDouble( void ) const = 0;

        /* printer */
        void    printChar( void ) const;
        void    printInt( void ) const;

        /* expection */
        class impossibleException : public std::exception	{
            public:
                virtual const	char* what() const throw()	{
                    return ("Impossible");
                }
        };
};

std::ostream &  operator<<( std::ostream & o, Caster const & f );

#endif