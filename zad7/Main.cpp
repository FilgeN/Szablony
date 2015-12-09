/*
	--- SZABLONY PRZYJAZNIE czesc 1 ---

	Program dotyczy zagadnienia gdy mamy w programie szablon klas (w
	naszym programie klase Pole )i chcemy by wszystkie klasy stworzone 
	przez ten szablon byly zaprzyjaznione z 1 inna klasa (lub funkcja).
	Na przyklad:
	Pole< 1 >   \
	Pole< 2 >   --friend--  Rolnik (wszystkie sie przyjaznia z Rolnikiem)
	Pole<150>   /


	Program symuluje prace na farmie.
	Dopisz klase Pole - tak aby wszystkie jej pola, funkcje byly
	prywatne ( tak aby nie dalo sie w main utworzyc obiektu pole).


	Dodalem przygotowalem definicje klasy Rolnik (bo nie pisanie
	klas jest tu celem ;p ).
	Dodalem enum'a by sensowniej to wygladalo ;p

*/


#include "Rolnik.h"
#include "Pole.h"

int main(void){

	Rolnik MaciejBoryna;
	MaciejBoryna.praca();

	return 0;
}
/* OUTPUT:
Praca w polu!
Praca w polu!
*/

