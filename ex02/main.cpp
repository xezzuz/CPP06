/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 17:45:00 by nazouz            #+#    #+#             */
/*   Updated: 2024/08/30 18:01:06 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int main(void) {
	{
		Base	baseObj;
		Base*	basePtr;
	
		basePtr = baseObj.generate();
		baseObj.identify(basePtr);
	}
	{
		Base	baseObj;
		Base*	basePtr;
	
		basePtr = baseObj.generate();
		baseObj.identify(*basePtr);
	}
}
