#ifndef Obiektomat_h
#define Obiektomat_h

#include <iostream>

template<typename Typ>
class Obiektomat{
public:
	Obiektomat(Typ t) {
		_info = t;
		std::cout << "Tworze obiekt " << _info << std::endl;
	} 
private:
	Typ _info;
};



#endif

