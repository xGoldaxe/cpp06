/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleveque <pleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 15:42:24 by pleveque          #+#    #+#             */
/*   Updated: 2022/03/29 16:08:56 by pleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdint.h>

typedef struct s_data {

    int status;
}   Data;

uintptr_t   serialize( Data* ptr ) {

    return ( reinterpret_cast<uintptr_t>(ptr) );
}

Data*   deserialize( uintptr_t raw ) {

    return ( reinterpret_cast<Data *>( raw ) );
}

int main( void ) {

    Data data;
    data.status = 666;

    uintptr_t raw = serialize( &data );
    std::cout << raw << std::endl;

    std::cout << "<-----------{Go back to ptr}----------->" << std::endl;

    Data *ptr = deserialize( raw );
    std::cout << ptr->status << std::endl;
    
    return (0);
}