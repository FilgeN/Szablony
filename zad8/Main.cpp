/*
	--- SZABLONY PRZYJAZNIE czesc 2 ---

	Program symuluje zarzadzanie skarbcem panstwa.
	Napisz/dokończ klasy Skarbiec i Krol.

	Program dotyczy drugiego zagadnienia zwiazanego z przyjazniami 
	szablonow klas funkcji. Tym razem kazda klasa stworzona przez
	szablon bedzie miala swojego 'osobistego przyjaciela'. 
	W naszym zadaniu:

	//A - Anglia
	//F - Francja

	Skarbiec< 'A' >   --friend--   Krol<'A'> 
	Skarbiec< 'F' >   --friend--   Krol<'F'>

	(Czyli do skarbca Anglii ma dostep tylko krol Anglii ).

	Załączyłem początek definicji klasy Król - należy go dokończyć
	korzystając z tego co już tam jest.
	(NIE można nic z tamtąd usuwać! ;p )
		

*/


#include "Krol.h"
#include "Skarbiec.h"



int main(void){
	srand( time(NULL) );

	Krol<'A'> Jerzy_V;
	Krol<'F'> Ludwik_XV;

	Jerzy_V.niechSkarbnikPoliczyMonety();
	Jerzy_V.sprawdzSkarbiec();

	Ludwik_XV.niechSkarbnikPoliczyMonety();
	Ludwik_XV.sprawdzSkarbiec();


	//Dodatek:
	std::cout << Jerzy_V << std::endl;

 
	return 0;
}