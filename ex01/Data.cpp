/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 13:27:16 by nazouz            #+#    #+#             */
/*   Updated: 2024/08/30 13:45:05 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data() {
	x = 1337;
	y = 42;
}

Data::Data(const Data& original) {
	x = original.x;
	y = original.y;
}

Data&	Data::operator=(const Data& original) {
	x = original.x;
	y = original.y;
	return *this;
}

Data::~Data() {

}

void	Data::printVars() const {
	std::cout << "x = " << x << ", y = " << y << std::endl;
}
