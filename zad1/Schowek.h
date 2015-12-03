#ifndef schowek_h
#define schowek_h

#include <iostream>
#include <cmath>
#include <typeinfo>

enum mojENUM {
	ile = 1
};

template<typename Type>
void schowek(Type t, int ile=0){
	static int licznik = 0;
	licznik++;
	if(ile){
		licznik--;
		std::cout << typeid(t).name() << ": " << licznik << std::endl;
	}
}

#endif