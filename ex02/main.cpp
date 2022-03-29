/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleveque <pleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 16:10:50 by pleveque          #+#    #+#             */
/*   Updated: 2022/03/29 18:07:33 by pleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>
#include <time.h> 

class Base { public: virtual ~Base( void ) {}; };

class A : public Base {};
class B : public Base { };
class C : public Base { };

static Base*    a() { return (new A()); }
static Base*    b() { return (new B()); }
static Base*    c() { return (new C()); }

Base * generate( void ) {

    Base* (*func[3])() = { a,b,c };
    return ( func[ rand() % 3 ]() );
}

void    identify( Base* p ) {

    try {

        A& a = dynamic_cast<A &>(*p);
        (void)a;
        std::cout << "A" << std::endl;
        return ;
    } catch ( const std::exception& e ) {}
    
    try {

        B& b = dynamic_cast<B &>(*p);
        (void)b;
        std::cout << "B" << std::endl;
        return ;
    } catch ( const std::exception& e ) {}
    
    try {

        C& c = dynamic_cast<C &>(*p);
        (void)c;
        std::cout << "C" << std::endl;
        return ;
    } catch ( const std::exception& e ) {}
}

void    identify( Base& p ) {

    try {

        A& a = dynamic_cast<A &>(p);
        (void)a;
        std::cout << "A" << std::endl;
        return ;
    } catch ( const std::exception& e ) {}
    
    try {

        B& b = dynamic_cast<B &>(p);
        (void)b;
        std::cout << "B" << std::endl;
        return ;
    } catch ( const std::exception& e ) {}
    
    try {

        C& c = dynamic_cast<C &>(p);
        (void)c;
        std::cout << "C" << std::endl;
        return ;
    } catch ( const std::exception& e ) {}
}

int main( void ) {

    srand (time(NULL));
    Base *test = generate();
    Base &t = *test;

    identify( test );
    identify( t );

    std::cout << "<-----------{For loop}----------->" << std::endl;

    for (size_t i = 0; i < 20; i++)
    {
        delete test;
        test = generate();
        identify( test );
    }
    delete test;
    return (0);
}