/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfabel <lfabel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 10:54:30 by lfabel            #+#    #+#             */
/*   Updated: 2025/03/10 12:57:15 by lfabel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int _fp_value;
	static const int _nb_fractbits;

public:
	Fixed();
	Fixed(const int input);
	Fixed(const float input);
	Fixed(const Fixed& copy);
	
	~Fixed();
	
	Fixed& operator=(const Fixed& other);
	
	float toFloat( void ) const;
	int toInt( void ) const;
	
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	
};

std::ostream& operator<<(std::ostream& os , const Fixed& fixed);