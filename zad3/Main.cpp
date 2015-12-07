#include "Obiektomat.h"

/*
	--- SZABLONY KLAS ---
	
	Obiektomat tworzacy obiekty ;p
	Dlaczego nie dziala linijka:   Obiektomat<double&> o2( val2 )     ?

	Popraw implementacje klasy Obiektomat tak aby Main się kompilowal
	oraz byl odpowiedni output.

*/

int main(void){

	
	Obiektomat<int>		o1( 1 );

	double val2 = 2.0;
	Obiektomat<double&> o2( val2 ); 


	return 0;
}

/* OUTPUT
Tworze obiekt 1
Tworze obiekt 2
*/