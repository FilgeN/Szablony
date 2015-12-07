/*
	--- SZABLONY FUNKCJI czesc 2---

	Zadanie dotyczy wskażników na funkcje.
	Napisz definicje funkcji:
		kalkulatorZaawansowany(...)

	Kontynuacja poprzedniego zadania (nr 5),
	z rozwinieciem zadania na wskazniki do z przestrzenii
	klasy ( dzialanie ).


*/


#include "Dzialanie.h"

int main(void){


	/* -----  CZESC 1   -----*/
	Dzialanie<int, double> dzialanie1(1.7, 5.4);

	std::cout << "dzialanie1.dodawanie() = ";
	kalkulatorZaawansowany<int, double>( 
					&Dzialanie<int, double>::dodawanie, 
					dzialanie1 
	);

	/* -----  CZESC 2   -----*/
	Dzialanie<float, double> dzialanie2(1.7, 5.4);
	std::cout << "dzialanie2.dodawanie() = ";
	kalkulatorZaawansowany<&Dzialanie<float, double>::dodawanie>( dzialanie2 );


	/* -----  CZESC 3   -----*/
	Dzialanie<int, double> dzialanie3(2.4, 1.4);
	kalkulatorZaawansowany( &Dzialanie<char, char>::info );




	return 0;
}

/* OUTPUT:
dzialanie1.dodawanie() = 7
dzialanie2.dodawanie() = 7.1
Stworzylem  3  obiekty typu Dzialanie<jakis_typ>
*/