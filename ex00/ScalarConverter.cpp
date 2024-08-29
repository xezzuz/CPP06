/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 19:04:03 by nazouz            #+#    #+#             */
/*   Updated: 2024/08/29 20:08:39 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

bool		isCharacter(const std::string& str) {
	if (str.length() == 1 && isprint(str[0]) && !isdigit(str[0]))
		return true;
	return false;
}

bool		isInteger(const std::string& str) {
	int			i = 0;

	if (str[i] == '+' || str[i] == '-') {
		i++;
		if (!str[i])
			return false;
	}
	for (; i < str.length(); i++) {
		if (!isdigit(str[i]))
			return false;
	}
	return true;
}

bool		isFloat(const std::string& str) {
	int			i = 0;
	int			decimalPointCount = 0;

	if (str[i] == '+' || str[i] == '-') {
		i++;
		if (!str[i])
			return false;
	}
	while (i < str.length()) {
		if (str[i] == '.')
			decimalPointCount++;
		else if (i == str.length() - 1 && str[str.length() - 1] == 'f')
			break ;
		else if (!isdigit(str[i]))
			return false;
		i++;
	}
	return decimalPointCount == 1 && str[str.length() - 1] == 'f';
}

bool		isDouble(const std::string& str) {
	int			i = 0;
	int			decimalPointCount = 0;

	if (str[i] == '+' || str[i] == '-') {
		i++;
		if (!str[i])
			return false;
	}
	while (i < str.length()) {
		if (str[i] == '.')
			decimalPointCount++;
		else if (!isdigit(str[i]))
			return false;
		i++;
	}
	return decimalPointCount == 1;
}

void		convertChar(const std::string& str) {
	std::cout << "char: '" << str[0] << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(str[0]) << std::endl;
	std::cout << "float: " << static_cast<float>(str[0]) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(str[0]) << std::endl;
}

void		ScalarConverter::convert(const std::string str) {
	
}

ScalarConverter::ScalarConverter() {
	
}

ScalarConverter::ScalarConverter(const ScalarConverter& original) {
	
}

ScalarConverter&	ScalarConverter::operator=(const ScalarConverter& original) {
	return *this;
}

ScalarConverter::~ScalarConverter() {
	
}
