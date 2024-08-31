/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 13:34:51 by nazouz            #+#    #+#             */
/*   Updated: 2024/08/30 13:44:12 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main() {
	Data		data;
	uintptr_t	srv;
	Data		*drv;

	srv = Serializer::serialize(&data);
	drv = Serializer::deserialize(srv);

	std::cout << "Data address: " << &data << std::endl;
	std::cout << "Serialize return value: " << srv << std::endl;
	std::cout << "Deserialize return value: " << drv << std::endl;

	drv->printVars();
}
