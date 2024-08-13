/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42nice.fr> >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 13:27:08 by biaroun           #+#    #+#             */
/*   Updated: 2024/08/13 13:52:45 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <cstdlib>
#include <cstdio>
#include <ctime> 


Base *generate(void) {
    int random = std::rand() % 3;
    if (random == 0)
        return ( new A );
    else if (random == 1)
        return (new B);
    else
        return (new C);
}

void identify(Base* p){
    if (dynamic_cast< A* >(p))
        std::cout << "  A" << std::endl;
    else if (dynamic_cast< B* >(p))
        std::cout << "  B" << std::endl;
    else if (dynamic_cast< C* >(p))
        std::cout << "  C" << std::endl;
    else
        std::cout << "unidentifiable" << std::endl;
}

void identify(Base& p) {
    if (dynamic_cast<A*>(&p)) {
        std::cout << "  A" << std::endl;
    } else if (dynamic_cast<B*>(&p)) {
        std::cout << "  B" << std::endl;
    } else if (dynamic_cast<C*>(&p)) {
        std::cout << "  C" << std::endl;
    } else {
        std::cout << "unidentifiable" << std::endl;
    }
}


int main() { 
    std::srand(std::time(0));
/*-------------------------------------------------- */
    std::cout << "test A:" << std::endl;
    Base* obj2 = new A;
    
    std::cout << "  Using pointer:" << std::endl;
    identify(obj2);

    std::cout << "  Using reference:" << std::endl;
    identify(*obj2);
    
    delete obj2;
/*-------------------------------------------------- */
    std::cout << "test B:" << std::endl;
    Base* obj3 = new B;
    
    std::cout << "  Using pointer:" << std::endl;
    identify(obj3);

    std::cout << "  Using reference:" << std::endl;
    identify(*obj3);
    
    delete obj3;
/*-------------------------------------------------- */
    std::cout << "test C:" << std::endl;
    Base* obj4 = new C;
    
    std::cout << "  Using pointer:" << std::endl;
    identify(obj4);

    std::cout << "  Using reference:" << std::endl;
    identify(*obj4);
    
    delete obj4;
/*-------------------------------------------------- */
    std::cout << "test generate:" << std::endl;
    Base* obj1 = generate();

    std::cout << "  Using pointer:" << std::endl;
    identify(obj1);

    std::cout << "  Using reference:" << std::endl;
    identify(*obj1);

    delete obj1;
    return 0;
}
