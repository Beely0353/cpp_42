/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42nice.fr> >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 13:46:00 by biaroun           #+#    #+#             */
/*   Updated: 2024/06/11 18:58:17 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
    //AAnimal animal;
    const AAnimal *tab[10];
    for (int i = 0; i <= 10; i++) {
        if (i % 2 == 0)
            tab[i] = new Dog();
        else
            tab[i] = new Cat();
    }

    for (int i = 0; i <= 10; i++) {
        delete tab[i];
    }

    Cat cat;
    cat.getType();
    cat.makeSound();
    cat.setBrain("chase mouse", 0);
    cat.sayBrain(0);
    return 0;
}
