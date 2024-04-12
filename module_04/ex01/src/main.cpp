/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42nice.fr> >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 13:46:00 by biaroun           #+#    #+#             */
/*   Updated: 2024/04/12 08:03:45 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << meta->getType() << " " << std::endl;
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    meta->makeSound();
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
    delete meta;

    const Animal *tab[100];
    for (int i = 0; i <= 100; i++) {
        if (i % 2 == 0) 
            tab[i] = new Dog();
        else
            tab[i] = new Cat();
    }

    for (int i = 0; i <= 100; i++) {
        delete tab[i];
    }
    
    return 0;
}