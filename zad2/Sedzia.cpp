#include "Sedzia.h"
#include "Hero.h"

/*
	--- SZABLONY FUNKCJI ---
	
	Kto jest szybszy? 
	Sedzia sprawdza kto jest szybszy i drukuje wynik na ekran.


*/

int main(){
	/* 1 */
	int slimak = 1, osiol = 2; //km/h
	sedzia(slimak, osiol);
	
	/* 2 */
	float tlen = 461.267, azot = 516.824; //szybkosc czasteczek gazu
	sedzia(tlen, azot);

	/* 3 */
	Hero Flash(9832.3);
	Hero Superman(9731.2);
	sedzia(Flash, Superman);
}


/* OUTPUT:
Wartosc szybszego: 2
Wartosc szybszego: 516.824
Wartosc szybszego: 9832.3
*/

