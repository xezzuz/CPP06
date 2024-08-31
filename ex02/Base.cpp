/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 13:55:17 by nazouz            #+#    #+#             */
/*   Updated: 2024/08/30 18:09:35 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base() {
	
}

Base*		Base::generate(void) {
	srand(time(NULL));

	int		randomNum = rand() % 3;
	if (!randomNum) {
		std::cout << "generated an object of type A" << std::endl;
		return new A();	
	}
	else if (randomNum == 1) {
		std::cout << "generated an object of type B" << std::endl;
		return new B();	
	}
	else {
		std::cout << "generated an object of type C" << std::endl;
		return new C();	
	}
	return NULL;
}

void		Base::identify(Base* p) {
	if (dynamic_cast<A*>(p)) {
		std::cout << "the object is of type: A" << std::endl;
	}
	else if (dynamic_cast<B*>(p)) {
		std::cout << "the object is of type: B" << std::endl;
	}
	else if (dynamic_cast<C*>(p)) {
		std::cout << "the object is of type: C" << std::endl;
	}
}

void		Base::identify(Base& p) {
	try {
		(void)dynamic_cast<A&>(p);
		std::cout << "the object is of type: A" << std::endl;
	}
	catch (std::bad_cast& err) {
		// std::cerr << "Exception Caught: " << err.what() << std::endl;
	}

	try {
		(void)dynamic_cast<B&>(p);
		std::cout << "the object is of type: B" << std::endl;
	}
	catch (std::bad_cast& err) {
		// std::cerr << "Exception Caught: " << err.what() << std::endl;
	}

	try {
		(void)dynamic_cast<C&>(p);
		std::cout << "the object is of type: C" << std::endl;
	}
	catch (std::bad_cast& err) {
		// std::cerr << "Exception Caught: " << err.what() << std::endl;
	}
}
