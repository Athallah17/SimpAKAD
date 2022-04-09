#ifndef __TENDIK_HPP__
#define __TENDIK_HPP__

#include <iostream>
#include "include/person.hpp"


class tendik : public person {
private:
	std::string npp;
	std::string unit;

public:
	tendik(std::string id, std::string nama, int tgl, int bln, int thn, std::string npp, std::string unit);

	void setUnit(std::string unit);
	std::string getUnit();	
	std::string getNPP();	
};

#endif