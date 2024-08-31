/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 19:04:03 by nazouz            #+#    #+#             */
/*   Updated: 2024/08/31 17:00:25 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

void		putSpecial(const std::string& str) {
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	if (str == "nan" || str == "nanf") {
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
	}
	else if (str == "+inf" || str == "+inff" || str == "inf" || str == "inff") {
		std::cout << "float: +inff" << std::endl;
		std::cout << "double: +inf" << std::endl;
	}
	else if (str == "-inf" || str == "-inff") {
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
	}
	else {
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
	}
}

bool		isCharacter(const std::string& str) {
	if (str.length() == 1 && isprint(str[0]) && !isdigit(str[0]))
		return true;
	return false;
}

bool		isInteger(const std::string& str) {
	size_t		i = 0;

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
	size_t		i = 0;
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
	size_t		i = 0;
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

void		convertCharacter(const std::string& str) {
	std::cout << "char: '" << str[0] << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(str[0]) << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(str[0]) << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(str[0]) << std::endl;
}

void		converInteger(const std::string& str) {
	try {
		long		n = 0;
		n = std::stol(str);
		if (isprint(n))
			std::cout << "char: '" << static_cast<char>(n) << "'" << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
		if (n < std::numeric_limits<int>::max() && n > std::numeric_limits<int>::min())
			std::cout << "int: " << n << std::endl;
		else
			std::cout << "int: impossible" << std::endl;
		std::cout << "float: ";
		if (isinf(n) && !signbit(n))
			std::cout << "+";
		std::cout << std::fixed << std::setprecision(1) << static_cast<float>(n) << "f" << std::endl;
		std::cout << "double: ";
		if (isinf(n) && !signbit(n))
			std::cout << "+";
		std::cout << std::fixed << std::setprecision(1) << static_cast<double>(n) << std::endl;
	}
	catch (std::exception& err) {
		std::cout << "Exception Caught: " << err.what() << std::endl;
	}
}

void		convertFloat(std::string str) {
	try {
		float	f = 0;
		f = std::stof(str);
		if (isprint(f) && static_cast<int>(f) == f)
			std::cout << "char: '" << static_cast<char>(f) << "'" << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
		if (f < std::numeric_limits<int>::max() && f > std::numeric_limits<int>::min())
			std::cout << "int : " << static_cast<int>(f) << std::endl;
		else
			std::cout << "int : impossible" << std::endl;
		std::cout << "float: ";
		if (isinf(f) && !signbit(f))
			std::cout << "+";
		std::cout << std::fixed << std::setprecision(1) << f << "f" << std::endl;
		std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(f) << std::endl;
	}
	catch (std::exception& err) {
		std::cout << "Exception Caught: " << err.what() << std::endl;
	}
}

void		convertDouble(std::string str) {
	try {
		double	d = 0;
		d = std::stod(str);
		if (isprint(d) && static_cast<int>(d) == d)
			std::cout << "char: '" << static_cast<char>(d) << "'" << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
		if (d < std::numeric_limits<int>::max() && d > std::numeric_limits<int>::min())
			std::cout << "int : " << static_cast<int>(d) << std::endl;
		else
			std::cout << "int : impossible" << std::endl;
		std::cout << "float: ";
		if (isinf(static_cast<float>(d)) && !signbit(d))
			std::cout << "+";
		std::cout << std::fixed << std::setprecision(1) << static_cast<float>(d) << "f" << std::endl;
		std::cout << "double: ";
		if (isinf(d) && !signbit(d))
			std::cout << "+";
		std::cout << std::fixed << std::setprecision(1) << d << std::endl;
	}
	catch (std::exception& err) {
		std::cout << "Exception Caught: " << err.what() << std::endl;
	}
}

void		ScalarConverter::convert(const std::string str) {
	if (isCharacter(str))
		convertCharacter(str);
	else if (isInteger(str))
		converInteger(str);
	else if (isFloat(str))
		convertFloat(str);
	else if (isDouble(str))
		convertDouble(str);
	else 
		putSpecial(str);
}

ScalarConverter::ScalarConverter() {

}

ScalarConverter::ScalarConverter(const ScalarConverter& original) {
	(void)original;
}

ScalarConverter&	ScalarConverter::operator=(const ScalarConverter& original) {
	(void)original;
	return *this;
}

ScalarConverter::~ScalarConverter() {
	
}
