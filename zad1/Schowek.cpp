/*
	--- SZABLONY FUNKCJI ---

	Schowek sluzy do chowania roznych rzeczy! ;p
	A jak chcemy widzieć "ile czego" schowalsmy to 
	wystarczy mu powiedziec 'ile'  :)

	Nie używamy:
		1) typedef
		2) define
		3) zmiennych globalnych

	Wykorzystujemy RTTI - krótki tip poniżej output'u :)
*/

#include "Schowek.h"

int main(void){
	schowek(12311);
	schowek("Mitoła");
	schowek(3124L);
	schowek(123.3);
	schowek('s');
	schowek("Kubek");
	schowek(M_PI);
	schowek(0.12321);
	schowek('s');
	schowek("Pudełko");
	schowek(1);
	schowek("Karty");
	schowek(123);
	schowek(sin(0.4));
	schowek(1L);
	schowek(130973.3);

	schowek( 1 ,ile);
	schowek(0.1,ile);
	schowek('a',ile);
	schowek("abc",ile);
	schowek(15L, ile);

	return 0;
}

/* OUTPUT:
i: 3
d: 5
c: 2
PKc: 4
l: 2
*/


/*
Tip:

RTTI (RunTime Type Identification) 
Mechanizm rozpoznawania typów.

Przykład:
#include <typeinfo>
typeid( float ).name() <- zwraca nazwe typu w postaci napisu

Możliwe jest także porownywanie takich obiektów,
bo są przeładowne operatory:  ==, !=   .

BTW. Mechanizm jest dość spoko ale też jest krytykowany, 
ponieważ kod powinnien być taki pisany aby nie trzeba było
z niego korzytać - a gdzie się da to zamiast niego użyc 
dynamic_cast'a :)

*/