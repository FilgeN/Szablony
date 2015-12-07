/*
	--- SZABLONY FUNKCJI czesc 1---

	Zadanie dotyczy wskażników na funkcje.
	Napisz definicje funkcji:
		kalkulator(...)
		kalkulatorZaawansowany(...)

	Funkcja kalkulatorZaawansowany(...) ma być szablonowa,
	gdzie: 
		Parametr 1 : informuje o tym jaki typ zwroci funkcja
					 przekazana jako wskaznik
		Parametr 2 : informuje jakie parametry przyjmuje funkcja 
					 przekazana jako wskaznik

	Jak cos to piszcie na priv bo troche zagmatwane ;p

*/


#include "Funkcje.h"
#include <cmath>

int main(void){


	/* -----  CZESC 1   -----*/
	std::cout << "sin(PI/2) = ";
	kalkulator(  sin, 3.14/2.0);

	/* -----  CZESC 2   -----*/
	std::cout << "cos(PI/6) = ";
	kalkulatorZaawansowany<double , double>(  cos, 3.14/6.0);

	/* -----  CZESC 3   -----*/
	std::cout << "cos( 2 ) = ";
	kalkulatorZaawansowany<double , int>(  cos, 1, 1);


	return 0;
}

/*OUTPUT:
sin(PI/2) = 1
cos(PI/6) = 0.866158
cos( 2 ) = -0.416147
*/