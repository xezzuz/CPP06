/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 19:01:35 by nazouz            #+#    #+#             */
/*   Updated: 2024/08/30 10:21:17 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <iomanip>

class ScalarConverter {
	private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter& original);
		ScalarConverter&	operator=(const ScalarConverter& original);
		~ScalarConverter();
	
	public:
		static void		convert(const std::string str);
};

#endif