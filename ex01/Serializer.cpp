/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 13:16:18 by nazouz            #+#    #+#             */
/*   Updated: 2024/08/30 13:34:40 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer() {
	
}

Serializer::Serializer(const Serializer& original) {
	(void)original;
}

Serializer& Serializer::operator=(const Serializer& original) {
	(void)original;
	return *this;
}

Serializer::~Serializer() {
	
}

uintptr_t	Serializer::serialize(Data* ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* 		Serializer::deserialize(uintptr_t raw) {
	return reinterpret_cast<Data*>(raw);
}
