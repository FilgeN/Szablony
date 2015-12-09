#ifndef Rolnik_h
#define Rolnik_h

#include "Pole.h"

enum typy {
	Pszenica,
	Owies
};

class Rolnik
{
public:
	void praca(){
		Pole<Pszenica> pole1; //Praca w polu!
		Pole<Owies> pole2;	  //Praca w polu!
	}	
};


#endif