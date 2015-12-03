#ifndef sedzia_h
#define sedzia_h

#include <iostream>
#include "Hero.h"


template<typename Typ>
void sedzia(Typ t1, Typ t2){
	if(t1>t2)
		std::cout << "Wartosc szybszego: "<< t1 << std::endl;
	else
		std::cout << "Wartosc szybszego: "<< t2 << std::endl;
}

void sedzia(Hero h1, Hero h2){
	if(h1._speed > h2._speed)
		std::cout << "Wartosc szybszego: "<< h1._speed << std::endl;
	else
		std::cout << "Wartosc szybszego: "<< h2._speed << std::endl;
}




#endif