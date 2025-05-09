/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeshko <mpeshko@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 23:08:21 by mpeshko           #+#    #+#             */
/*   Updated: 2025/05/09 00:19:33 by mpeshko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.hpp"

Sample::Sample( void ) {
    
    std::cout << "Constractor called" << std::endl;

    this->foo = 42;
    std::cout << "this->foo: " << this->foo << std::endl;

    this->bar();
    
    return;
}

Sample::~Sample( void ) {
    
    std::cout << "Destructor called" << std::endl;
    return;
}

void    Sample::bar( void ) {
    std::cout << "Member function bar called" << std::endl;
    return;
}