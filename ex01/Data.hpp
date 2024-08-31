/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 13:24:38 by nazouz            #+#    #+#             */
/*   Updated: 2024/08/30 13:43:23 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>

class Data {
	private:
		int		x;
		int		y;

	public:
		Data();
		Data(const Data& original);
		Data&	operator=(const Data& original);
		~Data();

		void	printVars() const;
};

#endif