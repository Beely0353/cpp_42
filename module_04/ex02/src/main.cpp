/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42nice.fr> >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 13:46:00 by biaroun           #+#    #+#             */
/*   Updated: 2024/04/12 08:13:16 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    j->makeSound();
    i->makeSound();

    const WrongAnimal* m = new WrongAnimal();
    const WrongAnimal* k = new WrongCat();
    std::cout << m->getType() << " " << std::endl;
    std::cout << k->getType() << " " << std::endl;
    m->makeSound();
    k->makeSound();

    delete i;
    delete j;
    
    return 0;
}
