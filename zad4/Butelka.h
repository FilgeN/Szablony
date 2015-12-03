#ifndef Butelka_H
#define Butelka_H

#include <string>
#include <cstring>
#include <iostream>

template<typename Wino>
class Butelka
{
public:
	Butelka(Wino w) : _nazwa(w) { std::cout << "Wino: " << w << std::endl; }
	Butelka& operator>(Butelka &comp){
		if ( this->_nazwa.size() > comp._nazwa.size() )
			return *this;
		else
			return comp;
	}

	friend std::ostream& operator<<(std::ostream& wyjscie, Butelka<Wino>& b){
		wyjscie << b._nazwa <<"\n";
		return wyjscie;
	}
	
private:
	Wino _nazwa;
};

template<>
class Butelka<const char*>{
public:
	Butelka(const char* w) { 
		_nazwa = new char[ strlen(w) + 1];
		strcpy(_nazwa, w);
		std::cout << "Wino: " << w << std::endl; }
	
	Butelka& operator>(Butelka &comp){
		if ( strlen(this->_nazwa) > strlen(comp._nazwa) )
			return *this;
		else
			return comp;
	}

	friend std::ostream& operator<<(std::ostream& wyjscie, Butelka<const char*>& b){
		wyjscie << b._nazwa <<"\n";
		return wyjscie;
	}	
private:
	char* _nazwa;
};



#endif